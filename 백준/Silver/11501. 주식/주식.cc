#include <stdio.h>

int T, N, arr[1000010], max;
long long ans;

int main(void)
{
	//freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	for (int t = 1; t <= T; t++)
	{
		ans = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
		}
		max = arr[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			else
			{
				ans += (max - arr[i]);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}