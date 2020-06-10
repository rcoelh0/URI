#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Convers�o de Tempo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Ler um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica.
@param: [nNum], inteiro, Guarda o valor digitado pelo usu�rio.
@param: [nHora], inteiro, Guarda o valor digitado pelo usu�rio.
@param: [nMin], inteiro, Guarda o valor digitado pelo usu�rio.
@param: [nSeg], inteiro, Guarda o valor digitado pelo usu�rio.

@return: num�rico, Informar o tempo expresso no formato horas:minutos:segundos.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nNum = 0, nHora = 0, nMin = 0, nSeg = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nNum);

	/*Calculando horas*/	
	nHora = nNum/3600;//retorna s� o inteiro da divis�o.
	
	/*Calculando minutos*/
	nMin = (nNum/60) - (nHora * 60);//necess�rio caso a quantidade de segundos atinja 1 hora ou mais.
	
	/*Calculando segundos*/
	nSeg = nNum - (nMin * 60) - (nHora * 3600);//necess�rio caso a quantidade de segundos atinja 1 minuto ou mais.

	
	/*Mostrando na tela o valor horas:minutos:segundos*/
	printf("%d:%d:%d\n", nHora, nMin, nSeg);
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}

