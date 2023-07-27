/*Faça um programa que pergunte quanto você ganha por hora e o numero de horas 
trabalhadas no mês. Calcule e mostre o total de seu salario no referido mês. sa-
bendo-se que são descontados 11% para o imposto de renda, 8% para o INSS e 5% 
para o sindicato. Calcule hora extras caso haja e a porcentagem adotada pela em-
presa(50%, 70% ou 100%.faça um programa que nos dê:
-> salário bruto incluido com o valor horas extras;
a) quanto pagou ao INSS;
B) quanto pagou ao sindicato;
c) salario liquido;
d) calcule os descontos e o salario liquido, conforme a tabela abaixo:
e) + Salario Bruto: R$
f) -IR(11%): R$
g) - INSS(8%) R$
h) -Sindicato(5%) R$
= Salario Liquido: R$
Obs: Salario bruto - Descontos = Salario Liquido.
   */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	system("color 4f");
	
	printf("\n  +++++++++++++++++++++++++++ FOLHA DE PAGAMENTO +++++++++++++++++++++++\n\n");
	
	float salario_hora_trabalhada=0, total_horas_mes=0, IR=0, descInss=0,
	sind=0, salLiquido=0, salBruto=0, somaDesconto=0, somatorio_extras=0,
	salBase=0, vph_acre=0;
	int he=0, porce=0;
	
	printf("  INFORME QUANTO VOCÊ GANHA POR HORA DE TRABALHO...: ");
	scanf("%f", &salario_hora_trabalhada);
	
	printf("  INFORME O TOTAL DE HORAS TRABALHADAS NO MÊS...: ");
	scanf("%f",&total_horas_mes);
	
	printf("  INFORME O TOTAL DE HORAS EXTRAS...: ");
	scanf("%i", &he);
	
	printf("  ESCOLHA A PORCENTAGEM PARA CALCULO DAS HORAS EXTRAS...:");
	scanf("%i", &porce);
	
	salBase= (salario_hora_trabalhada*total_horas_mes);
	
	if(porce==50){
		
		vph_acre= (salBase/total_horas_mes*1.5);
		somatorio_extras= (vph_acre*he);
			
	}else if(porce==70){
		vph_acre= (salBase/total_horas_mes*1.7);
		somatorio_extras= (vph_acre*he);
		
	}else if(porce==100){
	vph_acre= (salBase/total_horas_mes*2);
	somatorio_extras= (vph_acre*he);	
		
	}
	
	salBruto= (salBase+somatorio_extras);
			
	descInss=(salBruto*8)/100;
	sind= (salBruto*5)/100;
	IR= (salBruto*11)/100;
	
	somaDesconto= IR + descInss + sind;
	
	printf("\n  ++++++++++++++++++R E S U L T A D O  A P Ó S  C A L C U L O +++++++++++++\n\n");
	
	printf("\n  ( + )Valor de uma hora-extra normal.....: R$ %.2f\n",salario_hora_trabalhada);
	printf("\n  ( + )Valor de uma hora-extra............: R$ %.2f\n",vph_acre);
	printf("\n  ( + )Salario Base.......................: R$ %.2f\n",salBase);
	printf("\n  ( + )Horas Extras.......................: R$ %.2f\n",somatorio_extras);
	printf("\n  ( + )Salario bruto......................: R$ %.2f\n",salBruto);
	printf("\n  ( - )Imposto de Renda(11)...............: R$ %.2f\n",IR);
	printf("\n  ( - )INSS(8)............................: R$ %.2f\n", descInss);
	printf("\n  ( - )Sindicato(5).......................: R$ %.2f\n ", sind);
	printf("\n-------------------------------------------------------------\n");
	printf("\n  ( - )TOTAL DE DESCONTO NA FOLHA.....: R$ %.2f\n ", somaDesconto);
	
	salLiquido=salBruto-somaDesconto;
	printf("\n  -------------------------------------------------------------\n");
	printf("\n  ( + ) SALÁRIO LIQUIDO............: R$ %.2f \n\n ", salLiquido);
	
	printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	
	return 0;
	
	system("pause");
}
