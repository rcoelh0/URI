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
			  
			  No final deve ser impressa a mensagem �novo calculo (1-sim 2-nao)�, solicitando ao usu�rio que informe um c�digo (1 ou 2) 
			  indicando se ele deseja ou n�o executar o algoritmo novamente, (aceitar apenas os c�digo 1 ou 2). 
			  Se for informado o c�digo 1 deve ser repetida a execu��o de todo o programa para permitir um novo c�lculo, caso contr�rio o programa deve ser encerrado.

@param: [nota], double, Nota digitada pelo usu�rio.			 
@param: [aux], inteiro, Auxiliar para encontrar as duas notas validas.
@param: [perg], inteiro, Guarda a resposta da pergunta novo calculo (1-sim 2-nao).
@param: [media], double, Media das duas notas validas.

@return: caractere, Se uma nota inv�lida  for lida, deve ser impressa a mensagem "nota invalida".
					Quando duas notas v�lidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do c�lculo. 
					
					Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser 
					apresentada novamente se o valor da entrada padr�o para X for menor do que 1 ou maior do que 2, conforme o exemplo.
					
					O valor deve ser apresentado com duas casas ap�s o ponto decimal.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int aux = 0, perg = 0;
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
				
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d",&perg);
				
				while(perg != 1 && perg != 2)
				{
					printf("novo calculo (1-sim 2-nao)\n");
					scanf("%d",&perg);
				}
				
				if(perg == 2)
				{
					break;
				}
								
				aux = 0;
				media = 0;
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
