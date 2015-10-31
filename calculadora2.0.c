#include<stdio.h>
char x;
int a;
int b;
int s;
int r;
int m;
float d;
int main()
{
	do
	{
		printf("ingresa 2 numeros\n");
		scanf("%d",&a);
		scanf("%d",&b);
		s=a+b;
		r=a-b;
		m=a*b;
		d=a/b;
		printf("el resultado de la suma es:%d\n",s);
		printf("el resultado de la resta es:%d\n",r);
		printf("el resultado de la multiplicacion es:%d\n",m);
		printf("el resultado de la divicion es%f\n",d);
		printf("desea continuar ingrese s=(si) o n=(no)\n");
		fflush(stdin);
		scanf("%c",&x);
	}while(x=='s');
}
