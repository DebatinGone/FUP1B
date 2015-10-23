#include<stdio.h>
//libreria de E/S
int E1;
int main()
{//inicio
printf("ESCRIBE TU EDAD\n");
scanf("%d",&E1);
if(E1>=0 && E1<=12)
{
	printf("eres un niño");
}
else
{
	if(E1>=13 && E1<=18)
	{
        printf("eres adolecente");
	}
	else
	{
		if(E1>=19 && E1<=29)
		{
			printf("eres joven");
		}
		else
		{
			if(E1>=30 && E1<=60)
			{
				printf("eres adulto");
			}
			else
			{
				printf("eres un vejestorio");
			}
		}
	}
}
}
