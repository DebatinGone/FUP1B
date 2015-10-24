#include<stdio.h>
int n;
int i=0;
int x=0;
int main()
{
	printf("programa que suma un numero N y los menores a el\n");
	printf("ingresa un numero\n");
	scanf("%d",&n);
	while(i<(n+1))
	{
		x=x+i;
		i=i+1;
	}
	printf("el resultado es:%d",x);
}
