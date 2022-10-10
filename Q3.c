#include <stdio.h>

main(){
	int n,n2,resultado;
	printf("Digite dois numeros: ");
	scanf("%d%d",&n,&n2);
	if(n+n2>=20){
		resultado = n+n2-5;
		printf("%d",resultado);
	}
	else{
		resultado = n+n2+8;
		printf("%d",resultado);
	}
}
