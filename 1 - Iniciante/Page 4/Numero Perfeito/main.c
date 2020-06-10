#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Numero Perfeito

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Na matem�tica, um n�mero perfeito � um n�mero inteiro para o qual a soma de todos os seus divisores positivos pr�prios (excluindo ele mesmo) � igual ao pr�prio n�mero. 
			  Por exemplo o n�mero 6 � perfeito, pois 1+2+3 � igual a 6. Sua tarefa � escrever um programa que imprima se um determinado n�mero � perfeito ou n�o.

@param: [pA], inteiro, Popula��o da cidade A.			 
@param: [pB], inteiro, Popula��o da cidade B.
@param: [t], inteiro, Quantos testes seram realizados.	
@param: [i], inteiro, Contador numero de testes.
@param: [anos], inteiro, Quantidade em anos para a popula��o de A ficar maior que a de B.
@param: [g1], double, Taxa de crescimento populacional da cidade A em decimal.
@param: [g2], double, Taxa de crescimento populacional da cidade B em decimal.

@return: caractere, Para cada caso de teste de entrada, imprima a mensagem �X eh perfeito� ou �X nao eh perfeito�, de acordo com a especifica��o fornecida.

/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int i, num, t, aux = 0, j = 1;
	
	scanf("%d",&t);
	
	//La�o para repeti��o de acordo com o numero digitado pelo usu�rio				
	for(i = 0; i < t; i++)
	{
		scanf("%d",&num);
				
		while(j < num)
		{
			if(num % j == 0)
			{	
				aux += j;
			}
			j++;
		}
		if( aux == num)
		{
			printf("%d eh perfeito\n",num);	
		}
		else
		{
			printf("%d nao eh perfeito\n",num);	
		}
		
		aux = 0;
		j = 1;
	}
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
