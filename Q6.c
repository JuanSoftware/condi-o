#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n%2==0){
		if(n%5==0){
			if(n%10==0){
				printf("%d e divisivel por 10,5 e 2",n);
			}
			else{
				printf("%d e divisivel apenas por 2 e 5",n);
			}	
		}
		else{
			printf("%d e divisvel apenas por 2",n);
		}
	}
	else if(n%5==0){
		printf("%d e apenas divisivel por 5", n);
	}
	else{
		printf("nao e divisivel por 10,5 e 2");
	}
	
}
