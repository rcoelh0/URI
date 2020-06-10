#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Teste de Seleção 1

@author: Rafael Lima Coelho
@since: 28-06-2019
@version: RLC.1.0.URI

@description: Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, 
		      e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável 
			  A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usuário.
@param: [nC], inteiro, Guarda o terceiro numero digitado pelo usuário.
@param: [nD], inteiro, Guarda o quarto numero digitado pelo usuário.

@return: caractere, Mostre a respectiva mensagem após a validação dos valores.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nA = 0, nB = 0, nC = 0, nD = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	scanf("%d",&nD);
	
	/*Verificando se as condições do problema*/
	if(nB > nC && nD > nA && (nC + nD) > (nA + nB) && nC > 0 && nD > 0 && nA % 2 == 0)
	{
		/*Mostrando a mensagem na tela*/
		printf("Valores aceitos\n");	
	}
	else
	{
		/*Mostrando a mensagem na tela*/
		printf("Valores nao aceitos\n");	
	}	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
