#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Biblioteca com a função de converter as lentras em minúsculas.
#include <string.h>//Biblioteca para usar as funções strcmp(strA,strB) -Comprar as duas string e se forem iguais retorna zero. e strcpy(str2,str1) -Copia str1 em str2.

/*/
@type: Function - int main()
@title: Animal

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  
   			  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.
   			  
   			  {Verificar no URI}
			 
@param: [aPalavra], array, Guarda o primeiro numero digitado pelo usuário.

@return: caractere, Imprima o nome do animal correspondente à entrada fornecida.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	char aPalavra[12];
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%s", aPalavra);
	

	if(!strcmp(aPalavra,"vertebrado"))//a função strcmp retorna 0 se as strings forem iguais.
	{
		scanf("%s", aPalavra);
		
		if(!strcmp(aPalavra,"ave"))
		{
			scanf("%s", aPalavra);
			
			if(!strcmp(aPalavra,"carnivoro"))
			{
				printf("aguia\n");
			}
			if(!strcmp(aPalavra,"onivoro"))
			{
				printf("pomba\n");
			}
		}
		
		if(!strcmp(aPalavra,"mamifero"))
		{
			scanf("%s", aPalavra);
			
			if(!strcmp(aPalavra,"onivoro"))
			{
				printf("homem\n");
			}
			if(!strcmp(aPalavra,"herbivoro"))
			{
				printf("vaca\n");
			}
		}
	}
	
	if(!strcmp(aPalavra,"invertebrado"))//a função strcmp retorna 0 se as strings forem iguais.
	{
		scanf("%s", aPalavra);
		
		if(!strcmp(aPalavra,"inseto"))
		{
			scanf("%s", aPalavra);
			
			if(!strcmp(aPalavra,"hematofago"))
			{
				printf("pulga\n");
			}
			if(!strcmp(aPalavra,"herbivoro"))
			{
				printf("lagarta\n");
			}
		}
		
		if(!strcmp(aPalavra,"anelideo"))
		{
			scanf("%s", aPalavra);
			
			if(!strcmp(aPalavra,"hematofago"))
			{
				printf("sanguessuga\n");
			}
			if(!strcmp(aPalavra,"onivoro"))
			{
				printf("minhoca\n");
			}
		}
	}
	

	/*Retorno da função para o fim do programa*/
	return 0;
}
