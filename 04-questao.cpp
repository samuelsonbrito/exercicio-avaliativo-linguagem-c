#include <stdio.h> // biblioteca 
#include <stdlib.h> // biblioteca

main(){ // função principal
	
	float salario_fixo = 1000, bonus = 100, total_bonus = 0, salario_total = 0;// a linha de variaveis
	int qtd_vendidos = 0; // linha de variaveis 
	
	printf("=== SISTEMA DE VENDAS ==="); // nome do sistema 
	printf("\n\nInforme a quantidade de softwares vendidos:  "); // campo de informação
	scanf("%i",&qtd_vendidos); // aqui é onde armazena a informação
	
	total_bonus = qtd_vendidos * bonus; // esta processando o calculo do total de bonus por software vendido
	
	salario_total = total_bonus + salario_fixo; // esta processando o calculo do salario total.
	
	printf("\nSalario fixo: R$ %.2f",salario_fixo); // a linha esta mostrando o salario fixo 
	printf("\nA bonificação por software vendido : R$ %.2f",total_bonus); // a linha esta mostrando a bonificação do funcionario
	printf("\nSalario total: R$ %.2f\n\n",salario_total); // a linha esta mostrando o salario total
	

	
	system("pause"); // parar o programa 
}
