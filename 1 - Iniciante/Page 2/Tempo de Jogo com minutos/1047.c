#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tempo de Jogo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.2.0.URI

@description: Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
			  Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
			  
@param: [nHi], inteiro, Guarda a primeira variável digitada pelo usuário.
@param: [nMi], inteiro, Guarda a segunda variável digitada pelo usuário.
@param: [nHf], inteiro, Guarda a terceira variável digitada pelo usuário.
@param: [nMf], inteiro, Guarda a quarta variável digitada pelo usuário.
@param: [nDurH], inteiro, Guarda a quantidade de horas que o jogo durou.
@param: [nDurM], inteiro, Guarda a quantidade de minutos que o jogo durou.

@return: caractere, Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nHi = 0, nHf = 0, nDurH = 0, nMi = 0, nMf = 0, nDurM = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nHi);
	scanf("%d",&nMi);
	scanf("%d",&nHf);
	scanf("%d",&nMf);

	/*Pegando só números positivos*/
	if(nHi >= 0 && nHf >= 0 && nMi >= 0 && nMf >= 0)
	{
		/*Verificando se os horários são iguais*/
		if(nHi == nHf)
		{
			if(nMi < nMf)//exemplo 7 7 7 8 = 0 horas 1 minuto. Foi o minimo do jogo que é 1 minuto.
			{
				nDurH = 0;
				nDurM = nMf - nMi;
			}
			else if(nMi == nMf)
			{
				nDurH = 24;
				nDurM = 0;				
			}
			else
			{
				nDurH = 24 - 1;
				nDurM = 60 + nMf - nMi;
			}

		}
		/*
			Se a hora inicial for maior que a hora final temos que continuar somando 1 hora dando a volta no relogio até chegar na hora final
			Ex.: 22 hora inicial, 21 hora final. Para obtermos a resposta temos que contar 23, 0(ou 24), 1, 2, 3, 4, 5, 6
			7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 e 21, dando um total de 23 horas e não 22 - 21 = 1 hora. Logo, se somar hora 
			final + 24 (quantidade de horas maxima) menos a hora inicial vamos obter (24 + 21) - 22 = 45 - 22 = 23 horas.  
		*/
		else if(nHi > nHf)
		{
			if(nMi < nMf)//exemplo 7 8 6 10 = 23 horas 2 minutos
			{
				nDurH = 24 - nHi + nHf;
				nDurM = nMf - nMi;
			}
			else if(nMi == nMf)//exemplo 7 8 6 8 = 23 horas 0 minutos. Não fez nem um minuto a menos e nem a mais.
			{
				nDurH = 24 - nHi + nHf;
				nDurM = 0;
			}
			else//exemplo 7 8 7 7 = 23 horas 59 minutos. Faltou um minuto para completar 24 horas.
			{
				nDurH = 24 - nHi + nHf - 1;
				nDurM = 60 + nMf - nMi;
			}
		}
		/*Se a hora inicial for menor que a final basta realizar a conta Hora final menos a hora inicial*/
		else
		{
			if(nMi < nMf)
			{
				nDurH = nHf - nHi;
				nDurM = nMf - nMi;
			}
			else if(nMi == nMf)
			{
				nDurH = nHf - nHi;
				nDurM = 0;			
			}
			else
			{
				nDurH = nHf - nHi - 1;
				nDurM = 60 + nMf - nMi;
			}
		}
	}
	
	/*Retorna a duração do jogo*/
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", nDurH, nDurM);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
