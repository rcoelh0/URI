#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: F�rmula de Bhaskara

@author: Rafael Lima Coelho
@since: 27-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. 
              Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, 
			  caso haja uma divis�o por 0 ou raiz de numero negativo.
@param: [nA], double, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nB], double, Guarda o segundo numero digitado pelo usu�rio.
@param: [nC], double, Guarda o terceiro numero digitado pelo usu�rio.

@return: caractere, Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". 
					Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem 
					correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	double nA = 0, nB = 0, nC = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Verificando se as condi��es do problema*/
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
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
