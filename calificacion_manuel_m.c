#include<stdio.h>
//libreria de E/S//
int C1;
int main()
{//inicio
printf("programa que te dice si pasaste\n");
printf("ingresa tu calificacion:");
scanf("%d",&C1);
if(C1>=7 && C1<=10)
{
	printf("felicidades pasaste");
}
if(C1>=0 && C1<=6)
{
	printf("lo sentimos reprobaste");
}
if(C1>10 || C1<0)
{
	printf("esta calificacion esta fuera de rango");
}
}//fin
/*
AND=&&
OR=||
NOT=! para negar ! Y entre parentesis la condicion*/

