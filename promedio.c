#include<stdio.h>
char x;
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
float p;
int main()
{
	x='s';
	while(x=='s')
	{
		printf("ingresa 10 numeros\n");
		scanf("%d\n",&a);
		scanf("%d\n",&b);
		scanf("%d\n",&c);
		scanf("%d\n",&d);
		scanf("%d\n",&e);
		scanf("%d\n",&f);
		scanf("%d\n",&g);
		scanf("%d\n",&h);
		scanf("%d\n",&i);
		scanf("%d\n",&j);
		p=(a+b+c+d+e+f+g+h+i+j)/10;
		printf("el promedio es de:%f\n",p);
		fflush(stdin);
		printf("desea continuar ingrese s=(si) o n=(no)\n");
		scanf("%s",&x);
	}
}
