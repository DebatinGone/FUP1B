#include<stdio.h>
int n[10], i=0, a;
int main()
{
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(a=9;a>-1;a--)
	{
		printf("\n%d",n[a]);
	}
}
