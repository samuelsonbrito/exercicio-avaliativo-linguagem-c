#include <stdio.h>
#include <stdlib.h>

main(){
	
	float valor = 0;
	
	printf("=== QUANTO VC PODE INVESTIR");
	printf("\n\nInforme o valor de investimento:  ");
	scanf("%f",&valor);
	
	if(valor == 100 || valor == 500){
		printf("\nVc pode invertir!!!\n\n");
	}else{
		printf("Vc nao pode investir!!!\n\n");
	}
	
	
	system("pause");
}
