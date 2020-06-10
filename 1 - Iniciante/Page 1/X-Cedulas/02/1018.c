#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: C�dulas

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.2.0.URI

@description: Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual 
              o valor pode ser decomposto. As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usu�rio.
@param: [nCont], inteiro, Guarda o n�mero de vezes que passou em cada nota.

@return: num�rico, Imprimir o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nNum = 1, nCont = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nNum);
	
	if(nNum > 0 && nNum < 1000000)
	{		
		/*Calculando o n�mero de notas de 100*/	
		nCont = nNum/100;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 100,00\n", nCont);
		
		/*Calculando o n�mero de notas de 50*/	
		nCont = (nNum%100)/50;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 50,00\n", nCont);
		
		/*Calculando o n�mero de notas de 20*/	
		nCont = ((nNum%100)%50)/20;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 20,00\n", nCont);
		
		/*Calculando o n�mero de notas de 10*/	
		nCont = (((nNum%100)%50)%20)/10;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 10,00\n", nCont);	
		
		/*Calculando o n�mero de notas de 5*/	
		nCont = ((((nNum%100)%50)%20)%10)/5;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 5,00\n", nCont);
		
		/*Calculando o n�mero de notas de 2*/	
		nCont = (((((nNum%100)%50)%20)%10)%5)/2;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 2,00\n", nCont);
		
		/*Calculando o n�mero de notas de 1*/	
		nCont = (((((nNum%100)%50)%20)%10)%5)%2;

		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 1,00\n", nCont);	
	}
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
