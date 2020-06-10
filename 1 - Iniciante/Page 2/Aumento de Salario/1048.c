#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Aumento de Sal�rio

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: A empresa ABC resolveu conceder um aumento de sal�rios a seus funcion�rios de acordo com a tabela abaixo:


								Sal�rio	Percentual de Reajuste
								0 		- 400.00     15%
								400.01  - 800.00     12%
								800.01  - 1200.00    10%
								1200.01 - 2000.00     7%
								Acima  de 2000.00     4%

			 Leia o sal�rio do funcion�rio e calcule e mostre o novo sal�rio, bem como o valor de reajuste ganho e o �ndice reajustado, em percentual.
			 
@param: [nSal], double, Guarda o primeiro numero digitado pelo usu�rio.

@return: caractere, Imprima 3 linhas na sa�da: o novo sal�rio, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	double nSal = 0.00;
	
	/*Capturando valores digitados pelo usu�rio*/
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
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
