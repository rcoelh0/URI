#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Cédulas

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.1.URI

@description: Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual 
              o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usuário.
@param: [nCont], inteiro, Guarda o número de vezes que passou em cada nota.
@param: [nI], inteiro, Guarda o valor de cada nota.
@param: [nAnt], inteiro, Guarda o valor anterior de nI.

@return: numérico, Imprimir o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nNum = 1, nCont = 0, nI= 100, nAnt = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nNum);
	
	/*Mostrando na tela o número digitado pelo usuário*/
	printf("%d\n", nNum);
	
	if(nNum > 0 && nNum < 1000000)
	{
		/*Laço de repetição para capturar todas as cédulas e números de vezes que elas aparecem*/
		while(nI<=100)
		{
			/*Atribuindo a nNum o resultado da subtração entre o valor digitado pelo usuário e o valor encontrado da soma das cédulas já computadas*/
			nNum = nNum - (nCont * nAnt);
			
			/*Calculando o número de notas*/	
			nCont = nNum/nI;//retorna só o inteiro da divisão.
			
			/*Mostrando na tela o número de notas por cédulas*/
			printf("%d nota(s) de R$ %d,00\n", nCont, nI);
			
			/*Condição de parada do laço de repetição*/
			if(nI == 1)
			{
				break;//Força a parada do comando while
			}
			
			nAnt = nI;//guardar o valor anterior da variavel nI para usar na formula do calculo do número de notas. 
			
			/*Foi necessário outra tratativa para cédula de valor 5 e 50*/
			if(nI != 5)
			{
				if(nI != 50)
				{
					nI = nI/2;
				}
				else
				{
					nI = nI - 30;
				}
			}
			else
			{
				nI = nI - 3;	
			}		
		}	
	}

	/*Retorno da função para o fim do programa*/
	return 0;
}
