/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 04: Fa�a o programa para calcular o valor monet�rio do desconto(D), 
sendoqueopre�o do produto (PR) � fornecido pelo usu�rio e o desconto � de5%. 
Apresentarovalor do desconto.

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float desconto=5,pr=0,d=0;
	
	printf("|---------CALCULAR DESCONTO DO DESCONTO---------|");
	printf("\nDIGITE O PRE�O DO PRODUTO: ");
	scanf("%f",&pr ); 

	system("cls");
	
	d=pr-(pr*desconto/100);

	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nVALOR EM REAIS � %.2f ",d);
	
	getch();
	return 0;
	
}
