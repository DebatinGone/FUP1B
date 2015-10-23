#include<stdio.h>//libreria de E/S
int resultado;
int resultado1;
int resultado2;
int resultado3;
int resultado4;
int N1;
int main ()
/*conversor de unidades*/
{//inicio
printf("conversor de uniades");
printf("dame una cantidad de megabytes:\n");
scanf("%d""%f",&N1);
resultado=((N1*1024)*1024)*8;
printf("el numero de bits es:%d\n",resultado);
resultado1=resultado/8;
printf("el numero de bytes es:%d\n",resultado1);
resultado2=resultado1/1024;
printf("el numero de kilobytes es:%d\n",resultado2);
resultado3=N1/1024;
printf("el numero de gigabytes es:%f\n",resultado3);
resultado4=resultado3/1024;
printf("el numero de terabytes es:%f\n",resultado4);
return 0 ;
}//fin

