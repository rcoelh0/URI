#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Area Direita

@author: Rafael Lima Coelho
@since: 24-10-2019
@version: RLC.1.0.URI

@description: Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. 
			  Em seguida, calcule e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o na area direita, entre as diagonais primarias e secindarias, da matriz, 
			  conforme ilustrado abaixo (�rea verde).
		 
@param: [l], inteiro, Contador linha.			 
@param: [c], inteiro, Contador coluna.
@param: [aux], inteiro, Auxiliar delimitar as celulas a serem selecionadas.
@param: [mat], double, Matriz.
@param: [soma], double, soma da linha.
@param: [meida], double, media da linha.
@param: [op], caractere, op��o soma (S) ou media (M).

@return: double, Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.
/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int l, c, aux = 0;
	double mat[12][12], soma = 0, media = 0;
	char op[4];//devemos declarar as strings dessa forma !!!
	
	scanf("%s",op); //para capturar o valor de uma string n�o se coloca o &
			
	//Atribuindo valores ao vetor				
	for(l = 0; l < 12; l++)
	{
		for(c = 0; c < 12; c++)
		{
			scanf("%lf",&mat[l][c]);		
		}
	}
		
	//somando valores
	for(l = 1; l < 11; l++)
	{
		for(c = 11 - l + aux; c <= 11; c++)
		{	
			if(c != 11 - l && c != l)
			{
				soma += mat[l][c];	
			}				
		}
		
		if(l > 3)	
		{
			aux++;
			if(l >= 6)
			{
				aux++;
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
								
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
