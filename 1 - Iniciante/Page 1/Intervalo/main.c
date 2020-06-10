#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Intervalo 2

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
			  Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
			  
@param: [nN], inteiro, Guarda o tamanho do vetor.
@param: [nX], inteiro, Valores digitados pelo usuário que serão validados.
@param: [nCont], inteiro, Contador do laço de repetição For.
@param: [nIn], inteiro, Numeros dentro do intervalo.
@param: [nOut], inteiro, Numeros fora do intervalo.

@return: caractere, Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nN = 0, nX = 0, nCont = 0, nIn = 0, nOut = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nN);
	
	/*Verificando as condições do problema*/
	if(nN > 0 && nN <= 10000)
	{
		/*Executa N vezes, conforme a variavel nN, para verificar se os numeros estão no intervalo [10,20]*/
		for(nCont = 0; nCont > nN; nCont++)
		{
			scanf("%d",&nX);
			
			/*Verifica se os numeros digitados estão no intervalo [10,20]*/
			if(nX >= 10 && nX <= 20)
			{
				nIn++;
			}
			else
			{
				nOut++;
			}
		}
	}
	
	printf("%d in \n", nIn);
	printf("%d out \n", nOut);
			
	/*Retorno da função para o fim do programa*/
	return 0;
}
