#include<stdio.h>
int a;
int b;
int c;
int d;
int e;
int main()
{
	printf("ingresa 5 numeros\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	if(a>=b && a>=c && a>=d && a>=e)
	{
		printf("el mayor es:%d\n",a);
	}
	else
	{
		if(b>=a && b>=c && b>=d && b>=e)
		{
			printf("el mayor es:%d\n",b);
		}
		else
		{
			if(c>=a && c>=b && c>=d && c>=e)
			{
				printf("el mayor es:%d\n",c);
			}
			else
			{
				if(d>=a && d>=b && d>=c && d>=e)
				{
					printf("el mayor es:%d\n",d);
				}
				else
				{
					if(e>=a && e>=b && e>=c && e>=d)
					{
						printf("el mayor es:%d\n",e);
					}
				}
			}
		}
	}
	
	if(a<=b && a<=c && a<=d && a<=e)
	{
		printf("el menor es:%d\n",a);
	}
	else
	{
		if(b<=a && b<=c && b<=d && b<=e)
		{
			printf("el menor es:%d\n",b);
		}
		else
		{
			if(c<=a && c<=b && c<=d && c<=e)
			{
				printf("el menor es:%d\n",c);
			}
			else
			{
				if(d<=a && d<=b && d<=c && d<=e)
				{
					printf("el menor es:%d\n",d);
				}
				else
				{
					if(e<=a && e<=b && e<=c && e<=d)
					{
						printf("el menor es:%d\n",e);
					}
				}
			}
		}
	}
}
