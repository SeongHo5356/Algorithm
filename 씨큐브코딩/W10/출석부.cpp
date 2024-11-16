#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

struct Person
{
	int id;
	string name;
	int c;
	int a;
};

int main() 
{
	Person student[10000];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int id, c, a;
		char name[21];
		scanf("%d %s %d %d", &id, name, &c, &a);
		student[i].id = id;
		student[i].name = name;
		student[i].c = c;
		student[i].a = a;
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		string search;
		cin >> search;
                int check = 1;
		for (int j = 0; j < n; j++)
			if (student[j].name == search)
                        {    
				printf("%d %d %d\n",
				  student[j].id, student[j].c, student[j].a);
                		check = 0;
			}
		if(check) printf("-1\n");
	}
	return 0;
}
	
