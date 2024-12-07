#include <cstdio>
#include <queue>
using namespace std;
int main() {
    queue<int> q;

    q.push(4);
    q.push(5);

    q.pop();

    printf("%d\n", q.front());
    printf("%d\n", q.empty());
    printf("%d\n", q.size());

    return 0;
}
