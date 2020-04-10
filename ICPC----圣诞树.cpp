#include<stdio.h>
void sz(int n,int k);
int main()
{
	int n,i,j;
	scanf("%d", &n);
	for (i = 2; i <= n + 1; i++)
	{
		sz(i,n);
	}
	for (i = 0; i < (n + 1)/2; i++)
	{
		for(j=0;j<n;j++)
		printf(" ");
		printf("||\n");
	}
	return 0;
}
void sz(int n,int k)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < k -i; j++)
			printf(" ");
		printf("/");
		for (j = 0; j < i* 2; j++)
			printf(" ");
		printf("\\\n");
	}
	for (i = 0; i < k-n+1; i++)
		printf(" ");
	printf("/");
	for (i = 0; i < (n-1)*2; i++)
		printf("_");
	printf("\\\n");
}