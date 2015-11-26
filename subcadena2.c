#include<stdio.h>
char cadena[50], buscar[50];
int i=-1, a=0, b=0, xi=-1, j=0;
int main()
{
	printf("programa que busca una palabra en otra\n");
	printf("escribe una palabra\n");
	scanf("%s",cadena);
	printf("escribe la palabra que vas a buscar\n");
	scanf("%s",buscar);
	for(j=0;buscar[j]!='\0';j++){
		i++;
	}
	for(a=0;cadena[a]!='\0';a++){
		if(buscar[b]==cadena[a]){
			xi++;
			b++;
		}
	}
	if(xi==i){
		printf("la palabra %s si existe dentro de %s",buscar,cadena);
	}
	else{
		printf("la palabra %s no exite dentro de %s",buscar,cadena);
	}
}
