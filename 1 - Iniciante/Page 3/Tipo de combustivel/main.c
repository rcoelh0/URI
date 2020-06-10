#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Tipo de Combustivel

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Um Posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes. 
	          Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma: 1.�lcool 2.Gasolina 3.Diesel 4.Fim). 
			  Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser solicitado um novo c�digo (at� que seja v�lido). 
			  O programa ser� encerrado quando o c�digo informado for o n�mero 4.

@param: [opcao], inteiro, Primeiro numero de entrada.			 
@param: [alcool], inteiro, Segundo numero de entrada.
@param: [gas] , inteiro, Contador do laco de repeticao.
@param: [diesel], inteiro, Segundo numero de entrada.

@return: caractere, Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combust�vel, conforme exemplo.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int opcao = 0, alcool = 0, gas = 0, diesel = 0;
	
	do
	{
		scanf("%d",&opcao);
		
		if(opcao == 1)
		{
			alcool++;		
		}
		else if(opcao == 2)
		{
			gas++;		
		}
		else if(opcao == 3)
		{
			diesel++;		
		}
			
	}while(opcao != 4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", diesel);
				
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
