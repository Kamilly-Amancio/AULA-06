/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 03: Faça o programa que calcule o valor em reais (VAL_REAL), 
correspondente aos dólares que um turista possui no cofre do hotel. O programa deve solicitar os seguintes 
dados: quantidade de dólares guardados no cofre (VAL_DOLAR)e cotaçãodo dólar naquele dia (COT).

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float val_Real=0, cot=0;
	int val_Dolar=0;
	
	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nDIGITE A QUANTIDADE DE DÓLARES GUARDADOS: ");
	scanf("%i",&val_Dolar );
	printf("\nDIGITE A COTAÇÃO DO VALOR NAQUELE DIA: ");
	scanf("%f",&cot);
	system("cls");
	
	val_Real=val_Dolar*cot;

	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nVALOR EM REAIS É %.2f ",val_Real);
	
	getch();
	return 0;
	
}
