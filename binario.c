#include<stdio.h>
int bi[10], a, b,c=0, i, x;
int main()
{
	scanf("%d",&x);
	for(i=0;x>0;i++)
	{
		a=x%2;
		bi[i]=a;
		x=x/2;
		printf("\n%d\n",bi[i]);
		c++;
	}
	for(b=c-1;b>-1;b--)
	{
		printf("%d",bi[b]);
	}
}
