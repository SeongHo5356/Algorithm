#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> p[10001];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int t, a;
		scanf("%d %d", &t, &a);
		p[i] = make_pair(t, a);
	}
	pair<int, int> no_1 = make_pair(-1,-1);//{-1,-1};
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (p[i] > no_1)
		{
			no_1 = p[i];
			ans = i;
		}
	}
	printf("%d",ans);
	return 0;
}
