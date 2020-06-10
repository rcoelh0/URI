#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Quadrado de pares

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
			  
@param: [nN], inteiro, Numero digitado pelo usuario.
@param: [nCont], inteiro, Contador do laço de repetição For.

@return: caractere, Imprima o quadrado de cada um dos valores pares, de 1 até N.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nN = 0.0;
	int nCont = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nN);
	
	/*Verificando as condições do problema*/
	if(nN > 5.0 && nN <= 2000.0)
	{
		/*O laco de repeticao executa o numero digitado pelo usuario dividido por 2 e multiplcado por 2, essa tratativa é necessario no caso de um numero impar*/
		for(nCont = 0; nCont < (floor(nN/2) * 2); nCont+=2)
		{
			printf("%d^2 = %d\n", (nCont + 2), (nCont + 2) * (nCont + 2));		
		}
	}
			
	/*Retorno da função para o fim do programa*/
	return 0;
}
