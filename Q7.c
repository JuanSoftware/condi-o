#include <stdio.h>

main(){
	float salario, parcela;
	printf("Digite o valor do seu salario e o valor da parcela do emprestimo: ");
	scanf("%f%f",&salario,&parcela);
	
	if(salario*0.3>=parcela){
		printf("Pode ser realizado o emprestimo");
	}
	else{
		printf("nao pode ser realizado");
	}
}
