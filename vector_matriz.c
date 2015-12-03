#include<stdio.h>
int identidad[3][3], a, b, n[10], j=0, x, y;
int main(){
	printf("programa que multiplica un vector por una matriz");
	printf("ingresa un vector\n");
	for(j=0;j<3;j++){
		scanf("%d",&n[j]);
	}
	printf("ingresa una matriz\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		    scanf("%d",&identidad[a][b]);
		}
	}
	j=0;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			x=identidad[a][b]*n[j];
			y+=x;
			j++;
		}
		printf("\n%d",y);
		y=0;
		j=0;
	}
}
