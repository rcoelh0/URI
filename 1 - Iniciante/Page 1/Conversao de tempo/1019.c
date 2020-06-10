#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Conversão de Tempo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Ler um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica.
@param: [nNum], inteiro, Guarda o valor digitado pelo usuário.
@param: [nHora], inteiro, Guarda o valor digitado pelo usuário.
@param: [nMin], inteiro, Guarda o valor digitado pelo usuário.
@param: [nSeg], inteiro, Guarda o valor digitado pelo usuário.

@return: numérico, Informar o tempo expresso no formato horas:minutos:segundos.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nNum = 0, nHora = 0, nMin = 0, nSeg = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nNum);

	/*Calculando horas*/	
	nHora = nNum/3600;//retorna só o inteiro da divisão.
	
	/*Calculando minutos*/
	nMin = (nNum/60) - (nHora * 60);//necessário caso a quantidade de segundos atinja 1 hora ou mais.
	
	/*Calculando segundos*/
	nSeg = nNum - (nMin * 60) - (nHora * 3600);//necessário caso a quantidade de segundos atinja 1 minuto ou mais.

	
	/*Mostrando na tela o valor horas:minutos:segundos*/
	printf("%d:%d:%d\n", nHora, nMin, nSeg);
			
	/*Retorno da função para o fim do programa*/
	return 0;
}

