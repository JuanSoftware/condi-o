#include <stdio.h>

main(){
	int n,n2;
	printf("Digite dois numero: ");
	scanf("%d%d",&n,&n2);
	
	if(n>n2){
		printf("%d<%d",n2,n);
	}
	else{
		printf("%d<%d",n,n2);
	}
}
