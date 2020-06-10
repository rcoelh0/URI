#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Crescente e Decrescente

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
              Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.
              A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. 
			  A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

@param: [aux], inteiro, Tamanho do vetor da res.			 
@param: [i], inteiro, Contador para impressao do resultado.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [res], vetor, Guarda os valores digitados pelo usuario.

@return: caractere, Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int aux = 0, x = 1, y = 0, i;	
	int res[100];
			
	while(x != y)
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
		if(res[i] < res[i + 1])
		{
			printf("Crescente\n");	
		}
		if(res[i] > res[i + 1])
		{
			printf("Decrescente\n");	
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
