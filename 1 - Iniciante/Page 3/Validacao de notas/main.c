#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Valida��o de notas

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. 
			  Calcule e imprima a m�dia semestral. Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). 
			  Cada nota deve ser validada separadamente.

@param: [nota], double, Nota digitada pelo usu�rio.			 
@param: [aux], inteiro, Auxiliar para encontrar as duas notas validas.
@param: [media], double, Media das duas notas validas.

@return: caractere, Se uma nota inv�lida  for lida, deve ser impressa a mensagem "nota invalida".
					Quando duas notas v�lidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do c�lculo. 
					O valor deve ser apresentado com duas casas ap�s o ponto decimal.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int aux = 0;
	double media = 0, nota = 0;
			
	/*Imprimindo o resultado*/
	while(1)
	{		
		scanf("%lf",&nota);
		
		if(nota >= 0 && nota <= 10)
		{
			media += nota;
			aux++;
			
			if(aux == 2)
			{
				printf("media = %.2lf\n", media/2);
				break;
			}		
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
