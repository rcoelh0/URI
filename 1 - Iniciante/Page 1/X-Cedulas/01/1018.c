#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: C�dulas

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.1.URI

@description: Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual 
              o valor pode ser decomposto. As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1.
@param: [nNum], inteiro, Guarda o primeiro valor digitado peli usu�rio.
@param: [nCont], inteiro, Guarda o n�mero de vezes que passou em cada nota.
@param: [nI], inteiro, Guarda o valor de cada nota.
@param: [nAnt], inteiro, Guarda o valor anterior de nI.

@return: num�rico, Imprimir o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nNum = 1, nCont = 0, nI= 100, nAnt = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nNum);
	
	/*Mostrando na tela o n�mero digitado pelo usu�rio*/
	printf("%d\n", nNum);
	
	if(nNum > 0 && nNum < 1000000)
	{
		/*La�o de repeti��o para capturar todas as c�dulas e n�meros de vezes que elas aparecem*/
		while(nI<=100)
		{
			/*Atribuindo a nNum o resultado da subtra��o entre o valor digitado pelo usu�rio e o valor encontrado da soma das c�dulas j� computadas*/
			nNum = nNum - (nCont * nAnt);
			
			/*Calculando o n�mero de notas*/	
			nCont = nNum/nI;//retorna s� o inteiro da divis�o.
			
			/*Mostrando na tela o n�mero de notas por c�dulas*/
			printf("%d nota(s) de R$ %d,00\n", nCont, nI);
			
			/*Condi��o de parada do la�o de repeti��o*/
			if(nI == 1)
			{
				break;//For�a a parada do comando while
			}
			
			nAnt = nI;//guardar o valor anterior da variavel nI para usar na formula do calculo do n�mero de notas. 
			
			/*Foi necess�rio outra tratativa para c�dula de valor 5 e 50*/
			if(nI != 5)
			{
				if(nI != 50)
				{
					nI = nI/2;
				}
				else
				{
					nI = nI - 30;
				}
			}
			else
			{
				nI = nI - 3;	
			}		
		}	
	}

	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
