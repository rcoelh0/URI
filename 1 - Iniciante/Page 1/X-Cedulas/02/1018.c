#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Cédulas

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.2.0.URI

@description: Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual 
              o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usuário.
@param: [nCont], inteiro, Guarda o número de vezes que passou em cada nota.

@return: numérico, Imprimir o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nNum = 1, nCont = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nNum);
	
	if(nNum > 0 && nNum < 1000000)
	{		
		/*Calculando o número de notas de 100*/	
		nCont = nNum/100;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 100,00\n", nCont);
		
		/*Calculando o número de notas de 50*/	
		nCont = (nNum%100)/50;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 50,00\n", nCont);
		
		/*Calculando o número de notas de 20*/	
		nCont = ((nNum%100)%50)/20;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 20,00\n", nCont);
		
		/*Calculando o número de notas de 10*/	
		nCont = (((nNum%100)%50)%20)/10;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 10,00\n", nCont);	
		
		/*Calculando o número de notas de 5*/	
		nCont = ((((nNum%100)%50)%20)%10)/5;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 5,00\n", nCont);
		
		/*Calculando o número de notas de 2*/	
		nCont = (((((nNum%100)%50)%20)%10)%5)/2;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 2,00\n", nCont);
		
		/*Calculando o número de notas de 1*/	
		nCont = (((((nNum%100)%50)%20)%10)%5)%2;

		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 1,00\n", nCont);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
