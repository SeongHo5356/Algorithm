#include <cstdio>
#include <vector>
using namespace std;
int main() {
    vector<int> v;

    v.push_back(12);
    v.push_back(5);
    v.push_back(96);

    for (int i = 0; i < v.size(); i++)
        printf("%d\n", v[i]);

    return 0;
}
