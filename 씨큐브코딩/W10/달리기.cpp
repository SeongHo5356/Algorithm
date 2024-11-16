#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> p[1001];
	pair<int, int> no_1 = make_pair(-1,-1);//{ -1,-1 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int s, t;
		scanf("%d %d", &s, &t);
		t = 5000 - t;
		p[i] = make_pair(s, t);
		if (p[i] > no_1)
			no_1 = p[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += no_1.first - p[i].first;
	}
	printf("%d",ans + no_1.second);
	return 0;
}
