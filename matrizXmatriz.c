#include<stdio.h>
int matriz1[10][10], matriz2[10][10], matrizR[10][10], a, b, c, j=0, k=0, x, y, n1, n2, n3, n4;
int main(){
	printf("programa que multiplica un vector por una matriz\n");
	printf("ingresa el numero de filas\n");
	scanf("%d",&n1);
	printf("ingresa el numero de columnas\n");
	scanf("%d",&n2);
	printf("ingresa una matriz\n");
	for(a=0;a<n1;a++){
		for(b=0;b<n2;b++){
		    scanf("%d",&matriz1[a][b]);
		}
	}
	printf("ingresa el numero de filas\n");
	scanf("%d",&n3);
	printf("ingresa el numero de columnas\n");
	scanf("%d",&n4);
	printf("ingresa una matriz\n");
	for(a=0;a<n3;a++){
		for(b=0;b<n4;b++){
		    scanf("%d",&matriz2[a][b]);
		}
	}
	printf("la matriz1 es:\n");
	for(a=0;a<n1;a++){
		for(b=0;b<n2;b++){
		    printf("%d ",matriz1[a][b]);
		}
		printf("\n");
	}
	printf("la matriz2 es:\n");
	for(a=0;a<n3;a++){
		for(b=0;b<n4;b++){
		    printf("%d ",matriz2[a][b]);
		}
		printf("\n");
	}
	if(n2!=n3){
		printf("no se pueden multiplicar la matrices");
		return 0;
	}
	else{
		if(n2==n3 && n1>=n4){
			for(c=0;c<n1*2;c++){
		        for(a=0;a<n1;a++){
		            for(b=0;b<n4;b++){
			            x=matriz1[a][b]*matriz2[b][a];
			            y+=x;
		            }
		            matrizR[k][j]=y;
		            if(j>n1){
			            k++;
			            j=0;
		            }
		            else{
			            j++;
		            }
		            y=0;
	            }
	        }
		}
		else{
			if(n2==n3 && n1<n4){
				for(c=0;c<n1*2;c++){
					for(a=0;a<n1;a++){
						for(b=0;b<n4;b++){
							x=matriz1[a][b]*matriz2[b][a];
							y+=x;
						}
						matrizR[k][j]=y;
						if(j>n1){
							k++;
							j=0;
						}
						else{
							j++;
						}
						y=0;
				    }
		 	    }
			}
		}
	}    
	printf("la matriz resultante es:\n");
	for(a=0;a<n1;a++){
		for(b=0;b<n4;b++){
		    printf("%d ",matrizR[a][b]);
		}
		printf("\n");
	}
}
