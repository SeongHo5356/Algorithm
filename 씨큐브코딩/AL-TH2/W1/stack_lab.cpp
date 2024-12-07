#include <cstdio>
#include <stack>
using namespace std;
int main() {
    stack<int> st;

    st.push(4);
    st.push(5);
    st.pop();

    printf("%d\n", st.top());
    printf("%d\n", st.empty());
    printf("%d\n", st.size());

    return 0;
}
