#include <cstdio>
#include <algorithm>
using namespace std;
long long a[1000000];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    long long ans = a[0];
    int ans_cnt = 1;
    int cnt = 1;
    for (int i=1; i<n; i++) {
        if (a[i] == a[i-1]) {
            cnt += 1;
        } else {
            cnt=1;
        }
        if (ans_cnt < cnt) {
            ans_cnt = cnt;
            ans = a[i];
        }
    }
    printf("%lld\n",ans);
    return 0;
}
