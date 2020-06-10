#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Quadrante

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. 
			  Para cada ponto escrever o quadrante a que ele pertence. 
			  O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

@param: [aux], inteiro, Tamanho do vetor da res.			 
@param: [i], inteiro, Contador para impressao do resultado.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [res], vetor, Guarda os valores digitados pelo usuario.

@return: caractere, Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int aux = 0, x = 1, y = 1, i;	
	int res[100];
			
	while(x != 0 && y != 0)
	{
		scanf("%d",&x);
		res[aux] = x;
		aux++;
		
		scanf("%d",&y);
		res[aux] = y;
		aux++;
	}
		
	/*Imprimindo o resultado*/
	for(i = 0;i <= (aux - 2); i+=2)
	{	
		if(res[i] > 0 && res[i + 1] > 0)
		{
			printf("primeiro\n");	
		}
		if(res[i] < 0 && res[i + 1] > 0)
		{
			printf("segundo\n");	
		}
		if(res[i] < 0 && res[i + 1] < 0)
		{
			printf("terceiro\n");	
		}
		if(res[i] > 0 && res[i + 1] < 0)
		{
			printf("quarto\n");	
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
