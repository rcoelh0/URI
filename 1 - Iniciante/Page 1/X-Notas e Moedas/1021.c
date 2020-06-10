#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Notas e Moedas

@author: Rafael Lima Coelho
@since: 28-06-2019
@version: RLC.1.1.URI

@description: Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
			  A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
			  As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usuário.
@param: [nCont], inteiro, Guarda o número de vezes que passou em cada nota.
@param: [nI], inteiro, Guarda o valor de cada nota.
@param: [nAnt], inteiro, Guarda o valor anterior de nI.

@return: numérico, Imprimir a quantidade mínima de notas e moedas necessárias.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nNota = 0, nMoeda = 0, nInt = 0, nFrac = 0;
	double nNum = 1.00; 
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nNum);
	
	/*Capturando a parte inteira do número*/
	nInt = floor(nNum);//a função floor pega a parte inteira de um numero real (double ou float)
		
	if(nNum >= 0.00 && nNum <= 1000000.00)
	{		
		/*Calculando o número de notas de 100*/	
		nNota = nInt/100;
		
		printf("NOTAS:\n");
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 100.00\n", nNota);
		
		/*Calculando o número de notas de 50*/	
		nNota = (nInt%100)/50;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 50.00\n", nNota);
		
		/*Calculando o número de notas de 20*/	
		nNota = ((nInt%100)%50)/20;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 20.00\n", nNota);
		
		/*Calculando o número de notas de 10*/	
		nNota = (((nInt%100)%50)%20)/10;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 10.00\n", nNota);	
		
		/*Calculando o número de notas de 5*/	
		nNota = ((((nInt%100)%50)%20)%10)/5;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 5.00\n", nNota);
		
		/*Calculando o número de notas de 2*/	
		nNota = (((((nInt%100)%50)%20)%10)%5)/2;
		
		/*Mostrando na tela o número de notas por cédulas*/
		printf("%d nota(s) de R$ 2.00\n", nNota);
		
		/*Calculando o número de moedas de 1*/	
		nNota = (((((nInt%100)%50)%20)%10)%5)%2;
		
		printf("MOEDAS:\n");
		
		nMoeda = nNota;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 1.00\n", nMoeda);	
		
		/*Capturando a parte fracionada do número*/
		nFrac = (nNum - nInt)*100;
		
		/*Calculando o número de moedas de 0.50*/	
		nMoeda = (nFrac%100)/50;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 0.50\n", nMoeda);
		
		/*Calculando o número de moedas de 0.25*/	
		nMoeda = ((nFrac%100)%50)/25;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 0.25\n", nMoeda);
		
		/*Calculando o número de moedas de 0.10*/	
		nMoeda = (((nFrac%100)%50)%25)/10;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 0.10\n", nMoeda);	
		
		/*Calculando o número de moedas de 0.05*/	
		nMoeda = ((((nFrac%100)%50)%25)%10)/5;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 0.05\n", nMoeda);
		
		/*Calculando o número de moedas de 0.01*/	
		nMoeda = ((((nFrac%100)%50)%25)%10)%5;
		
		/*Mostrando na tela o número de moedas*/
		printf("%d moeda(s) de R$ 0.01\n", nMoeda);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
