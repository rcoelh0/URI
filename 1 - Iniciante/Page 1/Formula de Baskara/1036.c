#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Fórmula de Bhaskara

@author: Rafael Lima Coelho
@since: 27-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
              Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
			  caso haja uma divisão por 0 ou raiz de numero negativo.
@param: [nA], double, Guarda o primeiro numero digitado pelo usuário.
@param: [nB], double, Guarda o segundo numero digitado pelo usuário.
@param: [nC], double, Guarda o terceiro numero digitado pelo usuário.

@return: caractere, Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
					Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem 
					correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nA = 0, nB = 0, nC = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Verificando se as condições do problema*/
	if(((nB*nB)-(4.00*nA*nC)) < 0 || nA == 0.0)
	{
		/*Mostrando a mensagem na tela*/
		printf("Impossivel calcular\n");	
	}
	else
	{
		/*Mostrando a mensagem na tela*/
		printf("R1 = %.5lf\n",(-nB+sqrt((nB*nB)-(4.00*nA*nC)))/(2*nA));
		printf("R2 = %.5lf\n",(-nB-sqrt((nB*nB)-(4.00*nA*nC)))/(2*nA));	
	}	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
