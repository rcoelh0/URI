#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Maior Posicao

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia 100 valores inteiros. Apresente ent�o o maior valor lido e a posi��o dentre os 100 valores lidos.
			 
@param: [nCont], inteiro, Contador.
@param: [nAux], inteiro, valor maior do vetor.
@param: [nPos], inteiro, indice do valor maior do vetor.
@param: [nValor], vetor, vetor com os valores a ser calculado.


@return: numerico, Apresente o maior valor lido e a posi��o de entrada, conforme exemplo abaixo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nValor[100];
	int nCont, nAux, nPos;
	
	scanf("%d",&nValor[0]);
	
	nAux = nValor[0];
	nPos = 0;
	
	for(nCont = 1;nCont < 100; nCont++)
	{
		scanf("%d",&nValor[nCont]);
		
		if(nValor[nCont] > nAux)
		{
			nAux = nValor[nCont];
			nPos = nCont;
		}
	}	
	
	printf("%d\n",nAux);
	printf("%d\n",nPos+1);
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
