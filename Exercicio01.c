/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 01:. Fa�a o programa para calcular a �rea (AREA) e o per�metro(P) 
de uma sala retangular, sendo que as dimens�es da sala (B e H) s�o fornecidas pelo usu�rio. 
Apresente a �rea e o per�metro depois de calculados.


*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	float area=0, base=0,altura=0;
	
	printf("\n|---------CALCULAR A AREA DA SALA RETANGULAR---------|");
	printf("\nDIGITE A BASE DA SALA: ");
	scanf("%f",&base);
	printf("\nDIGITE A ALTURA DA SALA: ");
	scanf("%f",&altura);
	
	area=base*altura;
	system("cls");
	printf("\n|---------CALCULO A AREA DA SALA RETANGULAR---------|");
	printf("\nA AREA DA BASE %.2f E ALTURA %.2f � %.2f ", base,altura,area);
	
	getch();
	return 0;
	

	
		
}
