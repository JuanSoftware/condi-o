#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n==20){
		printf("%de igual a 20",n);
	}
	else if(n>20){
		printf("%d e maior que 20",n);
	}
	else{
		printf("%d e menor que 20",n);
	}
}
