#include <stdio.h>

main(){
	int n,n2;
	printf("Digite dois numero: ");
	scanf("%d%d",&n,&n2);
	
	if(n>n2){
		printf("%d e maior",n);
	}
	else{
		printf("%d e maior",n2);
	}
}
