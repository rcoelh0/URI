#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sort Simples

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores inteiros e ordene-os em ordem crescente.
			  
@param: [nN1], inteiro, Guarda o primeiro n�mero digitado pelo usu�rio.
@param: [nN2], inteiro, Guarda o segundo n�mero digitado pelo usu�rio.
@param: [nN3], inteiro, Guarda o terceiro n�mero digitado pelo usu�rio.
@param: [nA], inteiro, Guarda a primeira vari�vel auxiliar.
@param: [nB], inteiro, Guarda a segunda vari�vel auxiliar.
@param: [nC], inteiro, Guarda a terceira vari�vel auxiliar.
@param: [nAux], inteiro, Guarda a quarta vari�vel auxiliar.

@return: num�rico, Mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequ�ncia como foram lidos.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nN1 = 0, nN2 = 0, nN3 = 0, nA = 0, nB = 0, nC = 0, nAux = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nN1);
	scanf("%d",&nN2);
	scanf("%d",&nN3);
	
	/*Armazenando os valores das vari�veis digitadas pelo usu�rio em vari�veis auxiliares*/
	nA = nN1;
	nB = nN2;
	nC = nN3;
	
	/*Ordenando os valores digitados pelo usu�rio em ordem crescente*/
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
	
	/*Impress�o dos valores em ordem crescente*/
	printf("%d\n%d\n%d\n",nA,nB,nC);
	
	/*Linha em branco*/
	printf("\n");
	
	/*Impress�o conforme as vari�veis foram lidas*/
	printf("%d\n%d\n%d\n",nN1,nN2,nN3);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
