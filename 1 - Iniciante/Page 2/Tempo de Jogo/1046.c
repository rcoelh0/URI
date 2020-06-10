#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tempo de Jogo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.2.0.URI

@description: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
			  sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
			  
@param: [nHi], inteiro, Guarda a primeira variável digitada pelo usuário.
@param: [nHf], inteiro, Guarda a segunda variável digitada pelo usuário.
@param: [nDur], inteiro, Guarda a quantidade de horas que o jogo durou.

@return: caractere, Apresente a duração do jogo. Ex.: O JOGO DUROU 10 HORA(S).
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nHi = 0, nHf = 0, nDur = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nHi);
	scanf("%d",&nHf);

	
	if(nHi >= 0 && nHf >= 0)
	{
		/*Verificando se os horários são iguais*/
		if(nHi == nHf)
		{
			nDur = 24;
		}
		/*
			Se a hora inicial for maior que a hora final temos que continuar somando 1 hora dando a volta no relogio até chegar na hora final
			Ex.: 22 hora inicial, 21 hora final. Para obtermos a resposta temos que contar 23, 0(ou 24), 1, 2, 3, 4, 5, 6
			7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 e 21, dando um total de 23 horas e não 22 - 21 = 1 hora. Logo, se somar hora 
			final + 24 (quantidade de horas maxima) menos a hora inicial vamos obter (24 + 21) - 22 = 45 - 22 = 23 horas.  
		*/
		else if(nHi > nHf)
		{
			nDur = 24 - nHi + nHf;
		}
		/*Se a hora inicial for menor que a final basta realizar a conta Hora final menos a hora inicial*/
		else
		{
			nDur = nHf - nHi;
		}
	}
	
	/*Retorna a duração do jogo*/
	printf("O JOGO DUROU %d HORA(S)\n", nDur);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
