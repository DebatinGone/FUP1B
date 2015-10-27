#include<stdio.h>
int a;
int b;
int c;

int main()
{
	printf("ingresa los valores\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("el mayor es:%d\n",a);
		if(b<a &&b>c)
		{
			printf("le media es:%d\n",b);
			printf("el menor es:%d\n",c);
		}
		else
		{
		if(c<a && c>b)
		{
			printf("le media es:%d\n",c);
			printf("el menor es:%d\n",b);
		}	
		}
	}
	else
	{
			if(b>a && b>c)
	{
		printf("el mayor es:%d\n",b);
		if(a<b && a>c)
		{
			printf("le media es:%d\n",a);
			printf("el menor es:%d\n",c);
		}
		else
		{
		if(c<b && c>a)
		{
			printf("le media es:%d\n",c);
			printf("el menor es:%d\n",a);
		}	
		}
	}
    else
	{
	    if(c>b && c>a)
	{
		printf("el mayor es:%d\n",c);
		if(a<c && a>b)
		{
			printf("le media es:%d\n",a);
			printf("el menor es:%d\n",b);
		}
		else
		{
		if(b<c && b>a)
		{
			printf("le media es:%d\n",b);
			printf("el menor es:%d\n",a);
		}	
		}
		}
	}
}
}
