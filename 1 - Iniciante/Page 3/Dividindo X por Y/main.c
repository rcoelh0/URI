#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Dividindo X por Y

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
			  Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.
			  A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida.

@param: [n], inteiro, Quantidade de pares de valores inteiros(X e Y) que serão lidos.			 
@param: [i], inteiro, Contador para impressao do resultado.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [res], float, Guarda o resultado da divisão x/y.

@return: caractere, Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso não seja possível efetuar o cálculo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
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
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
