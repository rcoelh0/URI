#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Validação de notas

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia as notas referentes às duas avaliações de um aluno. 
			  Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
			  Cada nota deve ser validada separadamente.

@param: [nota], double, Nota digitada pelo usuário.			 
@param: [aux], inteiro, Auxiliar para encontrar as duas notas validas.
@param: [media], double, Media das duas notas validas.

@return: caractere, Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
					Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. 
					O valor deve ser apresentado com duas casas após o ponto decimal.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
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
	/*Retorno da função para o fim do programa*/
	return 0;
}
