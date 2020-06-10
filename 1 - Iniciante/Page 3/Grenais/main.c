#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Grenais

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica do resultado de v�rios GRENAIS. 
			  Escreva um programa para ler o n�mero de gols marcados pelo Inter e pelo Gr�mio em um GRENAL. 
			  Logo ap�s escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. 
			  Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o n�mero de gols marcados pelos times em uma nova partida, 
			  caso contr�rio deve ser encerrado imprimindo:

			- Quantos GRENAIS fizeram parte da estat�stica.
			- O n�mero de vit�rias do Inter.
			- O n�mero de vit�rias do Gr�mio.
			- O n�mero de Empates.
			- Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

@param: [gInter] , inteiro, Numero de gols do inter.			 
@param: [gGremio], inteiro, Numero de gols do gremio.
@param: [grenais], inteiro, Numero de partidas.
@param: [perg]   , inteiro, Guarda a resposta da pergunta "Novo grenal (1-sim 2-nao)".
@param: [inter]  , inteiro, Numero de partidas vencidas pelo inter.			 
@param: [gremio] , inteiro, Numero de partidas vencidas pelo gremio.
@param: [empate] , inteiro, Numero de partidas empatadas.

@return: caractere, Ap�s cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". 
					Quando o algoritmo for encerrado devem ser mostradas as estat�sticas conforme a descri��o apresentada acima. 
					Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int grenais = 0, perg = 0, gInter = 0,gGremio = 0, gremio = 0, inter = 0, empate = 0;
			
	/*Calculando e imprimindo o resultado*/
	do
	{
		grenais++;		
		scanf("%d %d",&gInter, &gGremio);
		
		if(gInter > gGremio)
		{
			inter++;
		}
		else if(gInter < gGremio)
		{
			gremio++;
		}
		else
		{
			empate++;
		}
						
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&perg);
		
		if(perg != 1)
		{
			printf("%d grenais\n",grenais);	
			printf("Inter:%d\n",inter);
			printf("Gremio:%d\n",gremio);
			printf("Empates:%d\n",empate);
			
			if(inter > gremio)
			{
				printf("Inter venceu mais\n");	
			}
			else if(inter < gremio)
			{
				printf("Gremio venceu mais\n");	
			}
			else
			{
				printf("Nao houve vencedor\n");		
			}
		}		
		
	}while(perg == 1);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
