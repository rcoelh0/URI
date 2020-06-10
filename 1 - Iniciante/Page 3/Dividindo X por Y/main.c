#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Dividindo X por Y

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um algoritmo que leia 2 n�meros e imprima o resultado da divis�o do primeiro pelo segundo. 
			  Caso n�o for poss�vel mostre a mensagem �divisao impossivel� para os valores em quest�o.
			  A entrada cont�m um n�mero inteiro N. Este N ser� a quantidade de pares de valores inteiros (X e Y) que ser�o lidos em seguida.

@param: [n], inteiro, Quantidade de pares de valores inteiros(X e Y) que ser�o lidos.			 
@param: [i], inteiro, Contador para impressao do resultado.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [res], float, Guarda o resultado da divis�o x/y.

@return: caractere, Para cada caso mostre o resultado da divis�o com um d�gito ap�s o ponto decimal, ou �divisao impossivel� caso n�o seja poss�vel efetuar o c�lculo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int i, n;	
	int x = 0, y = 0;
	float res;
	
	scanf("%d",&n);
		
	/*Imprimindo o resultado*/
	for(i = 0;i < (n*2); i+=2)
	{
		scanf("%d %d",&x,&y);
		
		if(y == 0)
		{
			printf("divisao impossivel\n");	
		}
		else
		{
			res = (float)x/y;
			printf("%.1f\n",res);	
		}
	}
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
