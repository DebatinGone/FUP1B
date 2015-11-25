#include<stdio.h>
char cadena[20];
char x;
char z;
int i=0;
int main()
{
    scanf("%s",cadena);
    scanf("%s",&x);
    scanf("%s",&z);
    while(cadena[i]!=' ')
    {
    if(cadena[i]==x)
    {
    	cadena[i]=z;
    }
    i++;
    }
	printf("%s",cadena);
}
