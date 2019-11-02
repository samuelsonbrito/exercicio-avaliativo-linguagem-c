#include <stdio.h>
#include <stdlib.h>

main(){
	
	int idade = 0;
	
	printf("=== SAIBA SE VC PODE VOTAR");
	printf("\n\nInforme a sua idade:  ");
	scanf("%d",&idade);
	
	if(idade >= 16 && idade < 18){
		printf("\nEh opcional votar!!!\n\n");
	}else{
		printf("Eh obrigatorio votar!!!");
	}
	
	
	system("pause");
}
