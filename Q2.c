#include <stdio.h>

main(){
	int n,n2;
	printf("Digite dois numeros: ");
	scanf("%d%d",&n,&n2);
	if(n+n2>10){
		printf("Maior que 10");
	}
	else{
		printf("Menor que 10");
	}
}
