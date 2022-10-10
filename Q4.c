#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n%5==0){
		printf("Divisivel");
	}
	else{
		printf("Nao e divisivel");
	}
}
