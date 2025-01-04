#include<cstdio>
#include<algorithm>
#define INF 1234567890
using namespace std;

int d[5001];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5001; i++)
		d[i] = INF;
	d[3] = 1;
	d[5] = 1;
	for (int i = 6; i <= 5000; i++)
	{
		d[i] = min(d[i - 3], d[i - 5]) + 1;
	}
	if (d[n] < INF)
		printf("%d", d[n]);
	else
		printf("-1");
}
