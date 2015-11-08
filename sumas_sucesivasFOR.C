#include<stdio.h>
int a, b, i, suma;

int main()
{
	scanf("%d",&a);
	scanf("%d",&b);
	suma=0;
	for(i=1;i<=b;i++)
	{
		suma=suma+a;
	}
	printf("%d\n",suma);
}
