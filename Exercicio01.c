/*
NOME: KAMILLY AMANCIO BATISTA MATRICULA: 202202570397

EXERCICIO 01:. Faça o programa para calcular a área (AREA) e o perímetro(P) 
de uma sala retangular, sendo que as dimensões da sala (B e H) são fornecidas pelo usuário. 
Apresente a área e o perímetro depois de calculados.


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
	printf("\nA AREA DA BASE %.2f E ALTURA %.2f É %.2f ", base,altura,area);
	
	getch();
	return 0;
	

	
		
}
