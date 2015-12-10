#include<stdio.h>
int suma(int a,int b){
	int sm;
	sm=a+b;
	return sm;
}
int resta(int a,int b){
	int rs;
	rs=a-b;
	return rs;
}
int multi(int a,int b){
	int ml;
	ml=a*b;
	return ml;
}
float divi(int a,int b){
	float dv;
	if(a!=0 && b!=0){
		dv=a/b;
	}
	else{
		printf("no se puede dividir\n");
	}
	return dv;
}
int main(){
	int a;
	int b;
	int res;
	scanf("%d",&a);
	scanf("%d",&b);
	res = suma(a,b);
    printf("el resultado de la suma es:%d\n",res);
    res = resta(a,b);
    printf("el resultado de la resta es:%d\n",res);
    res = multi(a,b);
    printf("el resultado de la multiplicacion es:%d\n",res);
    res = divi(a,b);
	printf("el resultado de la division es:%d\n",res);
}
