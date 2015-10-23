#include<stdio.h>//libreria de  E/S
int propina;
int Tpagar;
int TP;
int C1;
int P1;
int main()
{//inicio
printf("calculador de propina\n");
printf("cuenta a pagar:\n");
scanf("%d",&C1);
printf("numero de personas:\n");
scanf("%d",&P1);
propina=C1*0.10;
Tpagar=propina+C1;
TP=Tpagar/P1;
printf("la propina es:%d\n",propina);
printf("total a pagar es:%d\n",Tpagar);
printf("total a pagar por persona es :%d",TP);
}//fin
