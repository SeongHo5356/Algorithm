#include <cstdint>
#include <cstdio>
#include <vector>

using namespace std;
vector<int64_t> buildings;
int M;
struct ratio {
    int64_t mother;
    int64_t child;
};
inline int max(int64_t a, int64_t b) { return a > b ? a : b; }
void solution(int64_t pos) {
    int sum = 0;

    ratio cur = {1, -buildings[pos]};
    for (int i = pos - 1; i >= 0; i--) {
        ratio bef = {pos - i, buildings[i] - buildings[pos]};
        if (cur.child * bef.mother < bef.child * cur.mother) {
            sum++;
            cur = bef;
        }
    }
    cur = {1, -buildings[pos]};
    for (int i = pos + 1; i < buildings.size(); i++) {
        ratio nxt = {i - pos, buildings[i] - buildings[pos]};
        if (cur.child * nxt.mother < nxt.child * cur.mother) {
            sum++;
            cur = nxt;
        }
    }
    M = max(M, sum);
    return;
}
int main() {
    int N;

    scanf("%d", &N);
    buildings.resize(N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &buildings[i]);
    }
    M = 0;
    for (int i = 0; i < buildings.size(); i++) {
        solution(i);
    }
    printf("%d\n", M);
}