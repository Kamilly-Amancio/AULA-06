/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 05:Faça o programa para calcular quanto será pago por umproduto(PAG),
 sendoqueo preço do produto (PR) e o desconto (D), em porcentagem, sãofornecidospelousuário. 
 Apresentar o valor a ser pago pelo produto.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float pag=0,pr=0,d=0;
	
	printf("|---------CALCULAR O VALOR A SER PAGO---------|");
	printf("\nDIGITE O PREÇO DO PRODUTO: ");
	scanf("%f",&pr ); 
	printf("\nDIGITE O VALOR DO DESCONTO: ");
	scanf("%f",&d ); 
	
	system("cls");
	pag=pr-(pr*d/100);

	printf("|---------VALOR A SER PAGO---------|");
	printf("\nVALOR É %.2f ",pag);
	
	getch();
	return 0;
	

		
}

