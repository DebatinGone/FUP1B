#include<stdio.h>
char cadena[50], subcadena[50];
int i=0, j=0;
int main()
{
	scanf("%s",cadena);
	scanf("%s",subcadena);
	while(cadena[i]!='\0'){
		while(cadena[i]==subcadena[j]){
			i++;
			j++;
			if(subcadena[j]=='\0'){
			printf("existe");break;
		    }
		}
		i++;
		if(subcadena[j]=='\0'){
		break;
	    }
		else j=0;
	}
	if(subcadena[j]!='\0'){
	printf("no existe");
    }
}
