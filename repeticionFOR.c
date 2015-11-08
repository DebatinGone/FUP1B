#include<stdio.h>
int x, e, i;
int main()
{
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(e=1;e<=i;e++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
