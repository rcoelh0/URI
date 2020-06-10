#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Area Superior

@author: Rafael Lima Coelho
@since: 24-10-2019
@version: RLC.1.0.URI

@description: Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
			  Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na area superior, entre as diagonais primarias e secindarias, da matriz, 
			  conforme ilustrado abaixo (área verde).
		 
@param: [l], inteiro, Contador linha.			 
@param: [c], inteiro, Contador coluna.
@param: [mat], double, Matriz.
@param: [soma], double, soma da linha.
@param: [meida], double, media da linha.
@param: [op], caractere, opção soma (S) ou media (M).

@return: double, Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int l, c;
	double mat[12][12], soma = 0, media = 0;
	char op[4];//devemos declarar as strings dessa forma !!!
	
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
	for(l = 0; l < 5; l++)
	{
		for(c = 1 + l; c < 11 - l; c++)
		{	
			if(c != 11 - l && c != l)
			{
				soma += mat[l][c];
			}				
		}
	}
	
	media = soma/30;
	
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
