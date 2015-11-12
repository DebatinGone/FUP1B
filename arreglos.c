#include<stdio.h>
int c[10];
int i=0, suma=0, promedio;
int main()
{
	printf("dame calificaciones\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&c[i]);
		suma+=c[i];
		if(i==9)
		{
			promedio=suma/10;
			printf("promedio:%d\n",promedio);
			break;
		}
	}
}
