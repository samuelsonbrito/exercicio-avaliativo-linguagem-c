#include <stdio.h>
#include <stdlib.h>

main(){
	
	int idade = 0;
	
	printf("=== SAIBA SE VC PODE VOTAR");
	printf("\n\nInforme a sua idade:  ");
	scanf("%d",&idade);
	
	if(idade >= 16){
		printf("\nPode votar!!!\n\n");
	}else{
		printf("Nao pode voltar\n\n");
	}
	
	
	system("pause");
}
