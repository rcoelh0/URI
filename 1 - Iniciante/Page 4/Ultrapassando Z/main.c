#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Ultrapassando Z

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia dois inteiros: X e Z (devem ser lidos tantos valores para Z quantos necess�rios, at� que seja digitado um valor maior do que X para ele). 
			  Conte quantos n�meros inteiros devem ser somados em sequ�ncia (considerando o X nesta soma) para que a soma ultrapasse a Z o m�nimo poss�vel. Escreva o valor final da contagem.

			  A entrada pode conter, por exemplo, os valores 21 21 15 30. Neste caso, � ent�o assumido o valor 21 para X enquanto os valores 21 e 15 devem ser desconsiderados 
			  pois s�o menores ou iguais a X. Como o valor 30 est� dentro da especifica��o (maior do que X) ele ser� v�lido e ent�o deve-se processar os c�lculos para apresentar 
			  na sa�da o valor 2, pois � a quantidade de valores somados para se produzir um valor maior do que 30 (21 + 22).

@param: [a], inteiro, Primeiro numero inserido.			 
@param: [b], inteiro, Segundo numero inserido.
@param: [s], inteiro, Soma.	
@param: [i], inteiro, Contador numero de vezes que n ser� somado em a.

@return: inteiro, Imprima uma linha com um n�mero inteiro que representa a quantidade de n�meros inteiros que devem ser somadas, de acordo com a especifica��o acima.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int b = 0, i = 0, a = 0, s = 0;
	
	scanf("%d %d",&a,&b);
	
	while(b <= a)
	{
		scanf("%d",&b);
	}
	
	while(s <= b)
	{		
		s += a;
		a++;						
		i++;	
	}
	
	printf("%d\n",i);
				
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
