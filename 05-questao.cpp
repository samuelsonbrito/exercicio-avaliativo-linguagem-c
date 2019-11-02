#include <stdio.h> // biblioteca
#include <stdlib.h> // biblioteca

main(){ // funçao principal
	
	float salario_bruto = 0, salario_liquido = 0, valor_inss = 0, valor_ir = 0; // linha de variaveis 
	
	printf("=== SISTEMA DE FOLHA DE PAGAMENTO ==="); // nome do programa
	printf("\n\nInforme o salario bruto:  "); // campo onde é inserido a informação 
	scanf("%f",&salario_bruto); // campo onde é guardada a variavel
	
	valor_inss = salario_bruto * 0.10; // ccalculo do inss
	valor_ir = salario_bruto * 0.05; // calculo de ir
	
	salario_liquido = salario_bruto - valor_inss - valor_ir; // calculo de salario liquido
	
	printf("\nINSS: R$ %.2f",valor_inss); // mostrador de inss
	printf("\nIR: R$ %.2f",valor_ir);  // mostrador de IR
	printf("\nSalario liquido: R$ %.2f\n\n",salario_liquido); // mostrador de salario liquido 

	
	system("pause"); // parar programa
}
