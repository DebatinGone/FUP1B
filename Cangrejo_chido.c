#include<stdio.h>
int x, y, z, i=0;
int main()
{
	printf("ingresa la profundidad\n");
	scanf("%d",&x);
	printf("ingresa los metros que avanza en el dia\n");
	scanf("%d",&y);
	printf("ingresa los metros q retrosede en la noche\n");
	scanf("%d",&z);
	while(x>0)
	{
		i++;
		x-=y;
		if(x<=0)
		{
			printf("salio\ndias:%d",i);
			break;
		}
		x+=z;
		if(y==z || x<0)
		{
			printf("nunca saldra");
			break;
		}
	}
}
