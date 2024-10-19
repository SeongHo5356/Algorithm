#include<cstdio>

int One(int n)
{
	return (n - 2) * (n + 1) * n / 2;
}

int Two(int n)
{
	return  (n * n * n) - ((n - 1) * (n - 1) * (n - 1));
}

int Three(int n)
{
	return (3 * n * n * n) - (n * n) - (3 * n);
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (m == 1) printf("%d",One(n));
	else if (m == 2) printf("%d", Two(n));
	else printf("%d", Three(n));
	return 0;
}

