#include<stdio.h>
int multi[10], x, i=0;
int main()
{
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		multi[i]=x*(i+1);
		printf("\n%d",multi[i]);
	}
}
