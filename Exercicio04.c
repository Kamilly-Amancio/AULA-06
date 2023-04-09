/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 04: Faça o programa para calcular o valor monetário do desconto(D), 
sendoqueopreço do produto (PR) é fornecido pelo usuário e o desconto é de5%. 
Apresentarovalor do desconto.

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float desconto=5,pr=0,d=0;
	
	printf("|---------CALCULAR DESCONTO DO DESCONTO---------|");
	printf("\nDIGITE O PREÇO DO PRODUTO: ");
	scanf("%f",&pr ); 

	system("cls");
	
	d=pr-(pr*desconto/100);

	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nVALOR EM REAIS É %.2f ",d);
	
	getch();
	return 0;
	
}
