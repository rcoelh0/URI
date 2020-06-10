#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Quadrado de pares

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.
			  
@param: [nN], inteiro, Numero digitado pelo usuario.
@param: [nCont], inteiro, Contador do la�o de repeti��o For.

@return: caractere, Imprima o quadrado de cada um dos valores pares, de 1 at� N.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	double nN = 0.0;
	int nCont = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nN);
	
	/*Verificando as condi��es do problema*/
	if(nN > 5.0 && nN <= 2000.0)
	{
		/*O laco de repeticao executa o numero digitado pelo usuario dividido por 2 e multiplcado por 2, essa tratativa � necessario no caso de um numero impar*/
		for(nCont = 0; nCont < (floor(nN/2) * 2); nCont+=2)
		{
			printf("%d^2 = %d\n", (nCont + 2), (nCont + 2) * (nCont + 2));		
		}
	}
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
