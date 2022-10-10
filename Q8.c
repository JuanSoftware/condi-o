#include <stdio.h>

main(){
	float n;
	printf("Digite um numero: ");
	scanf("%f",&n);
	
	if(n>0){
		printf("e positivo");
	}
	else if(n<0){
		printf("e negativo");
	}
	else{
		printf("nulo");
	}
}
