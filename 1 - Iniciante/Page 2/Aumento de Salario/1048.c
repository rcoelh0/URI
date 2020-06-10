#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Aumento de Salário

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


								Salário	Percentual de Reajuste
								0 		- 400.00     15%
								400.01  - 800.00     12%
								800.01  - 1200.00    10%
								1200.01 - 2000.00     7%
								Acima  de 2000.00     4%

			 Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
			 
@param: [nSal], double, Guarda o primeiro numero digitado pelo usuário.

@return: caractere, Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nSal = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nSal);
	
	if(nSal >= 0.00 && nSal <= 400.00)
	{
		printf("Novo salario: %.2lf\n", (nSal * 0.15) + nSal);
		printf("Reajuste ganho: %.2lf\n", (nSal * 0.15));
		printf("Em percentual: 15 %%\n");	
	}
	
	if(nSal >= 400.01 && nSal <= 800.00)
	{
		printf("Novo salario: %.2lf\n", (nSal * 0.12) + nSal);
		printf("Reajuste ganho: %.2lf\n", (nSal * 0.12));
		printf("Em percentual: 12 %%\n");	
	}
	
	if(nSal >= 800.01 && nSal <= 1200.00)
	{
		printf("Novo salario: %.2lf\n", (nSal * 0.10) + nSal);
		printf("Reajuste ganho: %.2lf\n", (nSal * 0.10));
		printf("Em percentual: 10 %%\n");	
	}
	
	if(nSal >= 1200.01 && nSal <= 2000.00)
	{
		printf("Novo salario: %.2lf\n", (nSal * 0.07) + nSal);
		printf("Reajuste ganho: %.2lf\n", (nSal * 0.07));
		printf("Em percentual: 7 %%\n");	
	}	

	if(nSal > 2000.00)
	{
		printf("Novo salario: %.2lf\n", (nSal * 0.04) + nSal);
		printf("Reajuste ganho: %.2lf\n", (nSal * 0.04));
		printf("Em percentual: 4 %%\n");	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
