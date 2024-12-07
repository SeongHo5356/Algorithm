#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> p[51][51];
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			int a, b;
			scanf("%d %d",&a, &b);
			p[i][j] = make_pair(a, b);
		}
	int a1, b1, a2, b2;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	pair<int, int> temp = p[a1][b1];
	p[a1][b1] = p[a2][b2];
	p[a2][b2] = temp;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d %d ", p[i][j].first, p[i][j].second);
		}
		printf("\n");
	}
	return 0;
}
