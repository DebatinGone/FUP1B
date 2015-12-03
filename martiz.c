#include<stdio.h>
int identidad[3][3], a=0, b=0, n;
int main(){
	printf("ingresa un escalar\n");
	scanf("%D",&n);
	printf("ingresa una matriz\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		    scanf("%d",&identidad[a][b]);
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		    printf("%d ",identidad[a][b]*n);
		}
		printf("\n");
	}
}
