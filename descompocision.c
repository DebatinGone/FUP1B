#include<stdio.h>
int a, b, c, d, e, f, g;
char x;
int main()
{
	do
	{
	    scanf("%d",&a);
	    b=a%10;
	    printf("%d\n",b);
	    c=((a-b)%100)/10;
	    printf("%d\n",c);
	    d=(((a-c*10-b)%1000)/10)/10;
	    printf("%d\n",d);
	    e=(a-c*10-d*10-b)/1000;
	    printf("%d\n",e);
	    printf("deceas continuar (s)=si 0 ()n=no\n");
	    fflush(stdin);
	    scanf("%c",&x);
    }while(x=='s');
}
