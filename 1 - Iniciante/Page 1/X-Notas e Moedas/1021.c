#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Notas e Moedas

@author: Rafael Lima Coelho
@since: 28-06-2019
@version: RLC.1.1.URI

@description: Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monet�rio. 
			  A seguir, calcule o menor n�mero de notas e moedas poss�veis no qual o valor pode ser decomposto. 
			  As notas consideradas s�o de 100, 50, 20, 10, 5, 2. As moedas poss�veis s�o de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usu�rio.
@param: [nCont], inteiro, Guarda o n�mero de vezes que passou em cada nota.
@param: [nI], inteiro, Guarda o valor de cada nota.
@param: [nAnt], inteiro, Guarda o valor anterior de nI.

@return: num�rico, Imprimir a quantidade m�nima de notas e moedas necess�rias.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nNota = 0, nMoeda = 0, nInt = 0, nFrac = 0;
	double nNum = 1.00; 
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nNum);
	
	/*Capturando a parte inteira do n�mero*/
	nInt = floor(nNum);//a fun��o floor pega a parte inteira de um numero real (double ou float)
		
	if(nNum >= 0.00 && nNum <= 1000000.00)
	{		
		/*Calculando o n�mero de notas de 100*/	
		nNota = nInt/100;
		
		printf("NOTAS:\n");
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 100.00\n", nNota);
		
		/*Calculando o n�mero de notas de 50*/	
		nNota = (nInt%100)/50;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 50.00\n", nNota);
		
		/*Calculando o n�mero de notas de 20*/	
		nNota = ((nInt%100)%50)/20;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 20.00\n", nNota);
		
		/*Calculando o n�mero de notas de 10*/	
		nNota = (((nInt%100)%50)%20)/10;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 10.00\n", nNota);	
		
		/*Calculando o n�mero de notas de 5*/	
		nNota = ((((nInt%100)%50)%20)%10)/5;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 5.00\n", nNota);
		
		/*Calculando o n�mero de notas de 2*/	
		nNota = (((((nInt%100)%50)%20)%10)%5)/2;
		
		/*Mostrando na tela o n�mero de notas por c�dulas*/
		printf("%d nota(s) de R$ 2.00\n", nNota);
		
		/*Calculando o n�mero de moedas de 1*/	
		nNota = (((((nInt%100)%50)%20)%10)%5)%2;
		
		printf("MOEDAS:\n");
		
		nMoeda = nNota;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 1.00\n", nMoeda);	
		
		/*Capturando a parte fracionada do n�mero*/
		nFrac = (nNum - nInt)*100;
		
		/*Calculando o n�mero de moedas de 0.50*/	
		nMoeda = (nFrac%100)/50;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 0.50\n", nMoeda);
		
		/*Calculando o n�mero de moedas de 0.25*/	
		nMoeda = ((nFrac%100)%50)/25;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 0.25\n", nMoeda);
		
		/*Calculando o n�mero de moedas de 0.10*/	
		nMoeda = (((nFrac%100)%50)%25)/10;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 0.10\n", nMoeda);	
		
		/*Calculando o n�mero de moedas de 0.05*/	
		nMoeda = ((((nFrac%100)%50)%25)%10)/5;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 0.05\n", nMoeda);
		
		/*Calculando o n�mero de moedas de 0.01*/	
		nMoeda = ((((nFrac%100)%50)%25)%10)%5;
		
		/*Mostrando na tela o n�mero de moedas*/
		printf("%d moeda(s) de R$ 0.01\n", nMoeda);	
	}
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
