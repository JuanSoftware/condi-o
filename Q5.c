#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n%3==0){
		if(n%7==0){
			printf("%d e divisivel por 3 e 7", n);
		}
		else{
			printf("%d e divisvel apenas por 3",n);
		}
	}
	else{
		printf("nao e divisivel nem por 3 nem por 7");
	}
	
}
