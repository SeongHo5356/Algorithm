#include <cstdio>
#include <stack>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char str[51];
        scanf("%s", str);
        int check = 0;
        stack<char> s;
        for (int i = 0; str[i]; i++) {
            if (str[i] == '(') {
                s.push(str[i]);
            }
            else {
                if (s.empty() || s.top() == ')')
                {
                    check = 1;
                    break;
                }
                else
                    s.pop();
            }
        }
        if (!s.empty() || check)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
