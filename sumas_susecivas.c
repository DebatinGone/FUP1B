#include<stdio.h>
int i=0;
int a;
int b;
int c;
int main()
{
	scanf("%d",&b);
	scanf("%d",&c);
	while(i<=(c-1))
	{
		a=a+b;//para abreviar //variable+=otracosa
		i=i+1;//para abreviar i=i+1--->//i++;
	}
	printf("%d",a);
}
