#include<cstdio>

struct Info
{
	int an, mn, sz, ps;
};

Info product[1000];
int cnt_product = 0;

void add_info(int an, int mn, int sz, int ps) 
{
	product[cnt_product].an = an;
	product[cnt_product].mn = mn;
	product[cnt_product].sz = sz;
	product[cnt_product].ps = ps;
	cnt_product++;
}

void modi_info(int an, int nb, int ch)
{
	for (int i = 0; i < cnt_product; i++)
	{
		if (an == product[i].an)
		{
			if (nb == 0)
				product[i].an = ch;
			else if (nb == 1)
				product[i].mn = ch;
			else if (nb == 2)
				product[i].sz = ch;
			else if (nb == 3)
				product[i].ps = ch;
		}
	}
}

void print_info(int an)
{
	for (int i = 0; i < cnt_product; i++)
	{
		if (an == product[i].an)
		{
			printf("%d %d %d %d\n", product[i].an, product[i].mn, 			  product[i].sz, product[i].ps);
		}
	}
}

int main() 
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int op;
		scanf("%d", &op);
		if (op == 0)
		{
			int an, mn, sz, ps;
			scanf("%d %d %d %d", &an, &mn, &sz, &ps);
			add_info(an, mn, sz, ps);
		}
		else if (op == 1)
		{
			int an, nb, ch;
			scanf("%d %d %d", &an, &nb, &ch);
			modi_info(an, nb, ch);
		}
		else if (op == 2)
		{
			int an;
			scanf("%d", &an);
			print_info(an);
		}
	}
	return 0;
}

