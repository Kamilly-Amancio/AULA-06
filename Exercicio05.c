/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 05:Fa�a o programa para calcular quanto ser� pago por umproduto(PAG),
 sendoqueo pre�o do produto (PR) e o desconto (D), em porcentagem, s�ofornecidospelousu�rio. 
 Apresentar o valor a ser pago pelo produto.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float pag=0,pr=0,d=0;
	
	printf("|---------CALCULAR O VALOR A SER PAGO---------|");
	printf("\nDIGITE O PRE�O DO PRODUTO: ");
	scanf("%f",&pr ); 
	printf("\nDIGITE O VALOR DO DESCONTO: ");
	scanf("%f",&d ); 
	
	system("cls");
	pag=pr-(pr*d/100);

	printf("|---------VALOR A SER PAGO---------|");
	printf("\nVALOR � %.2f ",pag);
	
	getch();
	return 0;
	

		
}

