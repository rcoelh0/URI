#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Senha fixa

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
			  Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". 
			  Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. 
			  Considere que a senha correta é o valor 2002.

@param: [aux], inteiro, Tamanho do vetor da res.			 
@param: [i], inteiro, Contador para impressao do resultado.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [res], vetor, Guarda os valores digitados pelo usuario.

@return: caractere, Para cada valor lido mostre a mensagem correspondente à descrição do problema.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int aux = 0, senha = 0, i;	
	int res[100];
			
	while(senha != 2002)
	{
		scanf("%d",&senha);
		res[aux] = senha;
		aux++;
	}
		
	/*Imprimindo o resultado*/
	for(i = 0;i < aux; i++)
	{	
		if(res[i] == 2002)
		{
			printf("Acesso Permitido\n");	
		}
		else
		{
			printf("Senha Invalida\n");	
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
