#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Coluna na Matriz

@author: Rafael Lima Coelho
@since: 24-10-2019
@version: RLC.1.0.URI

@description: Neste problema você deve ler um número, indicando uma coluna da matriz na qual uma operação deve ser realizada, um caractere maiúsculo, 
			  indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média 
			  dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, 
			  demonstrando os elementos que deverão ser considerados na operação.
		 
@param: [l], inteiro, Contador linha.			 
@param: [c], inteiro, Contador coluna.
@param: [n], inteiro, Linha do vetor que sera calculado a soma ou a media.
@param: [val], double, Valores inseridos pelo usuário.
@param: [mat], double, Matriz.
@param: [soma], double, soma da linha.
@param: [meida], double, media da linha.
@param: [op], caractere, opção soma (S) ou media (M).

@return: double, Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int l, c, n;
	double mat[12][12], soma = 0, media = 0;
	char op[4];//devemos declarar as strings dessa forma !!!
	
	scanf("%d",&n);
	
	scanf("%s",op); //para capturar o valor de uma string não se coloca o &
			
	//Atribuindo valores ao vetor				
	for(l = 0; l < 12; l++)
	{
		for(c = 0; c < 12; c++)
		{
			scanf("%lf",&mat[l][c]);		
		}
	}
		
	//imprimindo valores
	for(l = 0; l < 12; l++)
	{	
		soma += mat[l][n];				
	}
	
	media = soma/12;
	
	if(op[0] == 'S') 
	{
		printf("%.1lf\n",soma);		
	}
	
	if(op[0] == 'M')
	{
		printf("%.1lf\n",media);
	}
								
	/*Retorno da função para o fim do programa*/
	return 0;
}
