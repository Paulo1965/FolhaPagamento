/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que
calcule seu peso ideal, usando a seguinte formulas: 
-> Para homens: (72.7*h) - 58;
-> Para mulheres: (62.1*h)-44.7*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	system("color 5f");
	float altura=0, valorIMC=0;
	char sexo;
	
	printf("QUAL É O SEU SEXO 'M' - 'm' OU 'F' - 'f' : ");
	scanf("%c", &sexo);
		
	printf("INFORME A SUA ALTURA PARA O CALCULO...: ");
	scanf("%f", &altura);
	
	if((sexo == 'M') || (sexo== 'm')){
		valorIMC= (72.7*altura)-58;
		
		
		printf("\n\nSEU INDICE DE MASSA CORPORAL ESTA EM: %.2f \n\n", valorIMC);
		
		
	}else if((sexo == 'F') || (sexo == 'f')){
		valorIMC= (62.1*altura)-44.7;
		printf("\n\nO SEU INDICE DE MASSA CORPORAL ESTA EM: %.2f \n\n", valorIMC);
	
	}else{
		printf("\n\nINFORMAÇÃO SEXO INVALIDA, DIGITE 'M' - 'm' OU 'F' - 'f'!!!! \n\n");
	}
	
	system("pause");
	return 0;
}
