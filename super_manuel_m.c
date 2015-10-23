#include<stdio.h>
//libreria de E/S
int P1;
int N1;
int N2;
int total;
int main()
{//inicio
printf("presiona un numero para ingresar a la tienda\no ingresa la contraseña de administrador\n");
scanf("%d",&P1);
	if(P1>=0 && P1<=9)
	{
		printf("ingresa el numero del producto que deseas comprar\n\n");
		printf("(1)gomitas $5\n\n(2)tortas $15\n\n(3)power ade $14\n\n(4)maruchan $30\n\n(5)galletas $10\n\n");
		printf("(6)dorilocos $15\n\n(7)coca cola $10\n\n(8)arizona $11\n\n(9)boing! $15\n\n(10)hotdogs $15\n\n");
		scanf("%d",&N1);
		switch(N1){
		case 1:{
			printf("cuantas gomitas quiere?\n");
			scanf("%d",&N2);
			total=N2*5;
			printf("total :%d",total);
			break;
		}
		case 2:{
			printf("cuantas tortas quiere?\n");
			scanf("%d",&N2);
			total=N2*15;
			printf("total :%d",total);
			break;
		}
		case 3:{
			printf("cuantos power ade quire?\n");
			scanf("%d",&N2);
			total=N2*14;
			printf("total :%d",total);
			break;
		}
		case 4:{
			printf("cuantas maruchan quire?\n");
			scanf("%d",&N2);
			total=N2*30;
			printf("total :%d",total);
			break;
		}
		case 5:{
			printf("cuantas galletas quiere?\n");
			scanf("%d",&N2);
			total=N2*10;
			printf("total :%d",total);
			break;
		}
		case 6:{
			printf("cuantos dorilocos quiere?\n");
			scanf("%d",&N2);
			total=N2*15;
			printf("total :%d",total);
			break;
		}
		case 7:{
			printf("cuantas coca colas quiere?\n");
			scanf("%d",&N2);
			total=N2*10;
			printf("total :%d",total);
			break;
		}
		case 8:{
			printf("cuantos arizona quiere?\n");
			scanf("%d",&N2);
			total=N2*11;
			printf("total :%d",total);
			break;
		}
		case 9:{
			printf("cuantos boing! quiere?\n");
			scanf("%d",&N2);
			total=N2*15;
			printf("total :%d",total);
			break;
		}
		case 10:{
			printf("cuantos hotdogs quiere?\n");
			scanf("%d",&N2);
			total=N2*15;
			printf("total :%d",total);
			break;
		}
		default :{
			printf("no tenemos");
			break;
		}
	}
	}
	else
	{
		if(P1==12345)
		{
			printf("\ngananias\n\n$53726000");
		}
	}
}//fin
