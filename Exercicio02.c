/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 02:Fa�a o programa que calcule a idade de uma pessoa, 
sendo queoanoatual(AA)eo ano do nascimento da pessoa (AN) s�o fornecidos pelo 
usu�rio(considerequeapessoa j� fez anivers�rio este ano). Apresentar a idade da
 pessoa depois de calculada.

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int anoAtual=0, anoNasceu=0,calculo=0;
	
	printf("\n|---------CALCULAR A IDADE DA PESSOA---------|");
	printf("\nDIGITE O ANO ATUAL (AA): ");
	scanf("%i",&anoAtual);
	printf("\nDIGITE O ANO EM QUE NASCEU (AA): ");
	scanf("%i",&anoNasceu);
	
	calculo=anoAtual-anoNasceu;
	system("cls");
	printf("\n|---------CALCULAR A IDADE DA PESSOA---------|");
	printf("\nA IDADE DE QUEM NASCEU EM %i � %i ",anoNasceu, calculo);

	getch();
	return 0;

}
