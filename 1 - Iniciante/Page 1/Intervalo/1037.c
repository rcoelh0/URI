#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Intervalo

@author: Rafael Lima Coelho
@since: 27-06-2019
@version: RLC.1.0.URI

@description: Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos 
			  ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, 
			  deverá ser impressa a mensagem “Fora de intervalo”.
@param: [nA], double, Guarda o primeiro numero digitado pelo usuário.

@return: caractere, Imprimir seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) ou “Fora de intervalo”.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nA = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nA);
	
	/*Verificando as condições do problema*/
	if(nA >= 0.00 && nA <= 100.00)
	{
		if(nA <= 25)
		{
			/*Mostrando a mensagem na tela*/
			printf("Intervalo [0,25]\n");
		}
		else if(nA <= 50)
		{
			/*Mostrando a mensagem na tela*/
			printf("Intervalo (25,50]\n");			
		}
		else if(nA <= 75)
		{
			/*Mostrando a mensagem na tela*/
			printf("Intervalo (50,75]\n");			
		}
		else
		{	
			/*Mostrando a mensagem na tela*/
			printf("Intervalo (75,100]\n");						
		}

	}
	else
	{
		/*Mostrando a mensagem na tela*/
		printf("Fora de intervalo\n");
	}	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
