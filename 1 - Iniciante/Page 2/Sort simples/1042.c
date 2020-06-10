#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sort Simples

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores inteiros e ordene-os em ordem crescente.
			  
@param: [nN1], inteiro, Guarda o primeiro número digitado pelo usuário.
@param: [nN2], inteiro, Guarda o segundo número digitado pelo usuário.
@param: [nN3], inteiro, Guarda o terceiro número digitado pelo usuário.
@param: [nA], inteiro, Guarda a primeira variável auxiliar.
@param: [nB], inteiro, Guarda a segunda variável auxiliar.
@param: [nC], inteiro, Guarda a terceira variável auxiliar.
@param: [nAux], inteiro, Guarda a quarta variável auxiliar.

@return: numérico, Mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nN1 = 0, nN2 = 0, nN3 = 0, nA = 0, nB = 0, nC = 0, nAux = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nN1);
	scanf("%d",&nN2);
	scanf("%d",&nN3);
	
	/*Armazenando os valores das variáveis digitadas pelo usuário em variáveis auxiliares*/
	nA = nN1;
	nB = nN2;
	nC = nN3;
	
	/*Ordenando os valores digitados pelo usuário em ordem crescente*/
	if(nA >= nB)
	{
		nAux = nA;
		nA = nB;
		nB = nAux;
	}
	if(nA >= nC)
	{
		nAux = nA;
		nA = nC;
		nC = nAux;
	}
	if(nB >= nC)
	{
		nAux = nB;
		nB = nC;
		nC = nAux;
	}
	
	/*Impressão dos valores em ordem crescente*/
	printf("%d\n%d\n%d\n",nA,nB,nC);
	
	/*Linha em branco*/
	printf("\n");
	
	/*Impressão conforme as variáveis foram lidas*/
	printf("%d\n%d\n%d\n",nN1,nN2,nN3);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
