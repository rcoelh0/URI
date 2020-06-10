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
			  
			  No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) 
			  indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). 
			  Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

@param: [nota], double, Nota digitada pelo usuário.			 
@param: [aux], inteiro, Auxiliar para encontrar as duas notas validas.
@param: [perg], inteiro, Guarda a resposta da pergunta novo calculo (1-sim 2-nao).
@param: [media], double, Media das duas notas validas.

@return: caractere, Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
					Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. 
					
					Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser 
					apresentada novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo.
					
					O valor deve ser apresentado com duas casas após o ponto decimal.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
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
	/*Retorno da função para o fim do programa*/
	return 0;
}
