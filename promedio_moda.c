#include<stdio.h>
int c[10], moda[10], mayor=0, posmayor, i=0, suma=0, e;
float promedio;
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
			printf("promedio:%f\n",promedio);
		}
	}
	for(i=0;i<10;i++)
	{
		moda[i]=0;
	}
	for(i=0;i<10;i++)
	{
		moda[c[i]-1]++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",moda[i]);
	}
	for(i=0;i<10;i++)
	{
	if(moda[i]>mayor)
	{
		mayor=moda[i];
		posmayor=i;
	}	
	}
	printf("la moda es:%d",posmayor+1);
}
