#include<stdio.h>
//libreria deE/S
int K;
int R;
char x;
char y;
int main()
{//inicio
y='s';
while(y=='s')
{
printf("PRO 3000RS ultra\n");
printf("ingresa la cantidad de ropa a lavar\n");
scanf("%d",&K);
if(K>=0 && K<=20)
{
	if(K>=0 && K<=10)
	{
		printf("el nivel de agua es el minimo\n");
	}
	else
	{
		if(K>=11 && K<=15)
		{
			printf("el nivel de agua es normal\n");
		}
		else
		{
			if(K>=16 && K<=20)
			{
				printf("el nivel de agua es el maximo\n");
			}
		}
	}
	break;
}
else
{
printf("eres un IDIOTA no se puede lavar esta cantidad de ropa\n");
printf("decea reintentar ingrese s=(si) o n=(no)\n");
fflush(stdin);
scanf("%s",&y);
}
}
	x='s';
	while(x=='s')
	{
	printf("ingresa el tipo de ropa a lavar\ndelicada(1)\nnormal(2)\nmuy sucia(3)\n");
	scanf("%d",&R);
	switch(R)
	{
		case 1:
		{
			printf("la ropa es delicada\nel tiempo de lavado es de 5min.");
			break;
		}
        case 2:
		{
			printf("la ropa es normal\nel tiempo de lavado es de 10min.");
			break;
		}
	    case 3:
		{
			printf("la ropa esta muy sucia\nel tiempo de lavado es de 20min.");
			break;
		}
		default:
	    {
		    printf("eres un IDIOTA este tipo de ropa no existe\n");
		    printf("decea reintentar ingrese s=(si) o n=(no)\n");
		    fflush(stdin);
		    scanf("%s",&x);
		    break;
	    }
	}
	break;
    }
}//fin
