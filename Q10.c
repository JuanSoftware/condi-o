#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n>20){
		if(n<90){
			printf("%d esta entre 20 e 90",n);
		}
		else{
			printf("Esta fora do padrao");
		}
	}
	else{
		printf("Esta fora do padrao");
	}
}
