/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 03: Fa�a o programa que calcule o valor em reais (VAL_REAL), 
correspondente aos d�lares que um turista possui no cofre do hotel. O programa deve solicitar os seguintes 
dados: quantidade de d�lares guardados no cofre (VAL_DOLAR)e cota��odo d�lar naquele dia (COT).

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float val_Real=0, cot=0;
	int val_Dolar=0;
	
	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nDIGITE A QUANTIDADE DE D�LARES GUARDADOS: ");
	scanf("%i",&val_Dolar );
	printf("\nDIGITE A COTA��O DO VALOR NAQUELE DIA: ");
	scanf("%f",&cot);
	system("cls");
	
	val_Real=val_Dolar*cot;

	printf("|---------CALCULAR EM REAIS AOS DALORES---------|");
	printf("\nVALOR EM REAIS � %.2f ",val_Real);
	
	getch();
	return 0;
	
}
