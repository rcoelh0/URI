#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Idade em Dias

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Ler um valor inteiro correspondente � idade de uma pessoa em dias. 
@param: [nIdade], inteiro, Guarda o valor digitado pelo usu�rio.
@param: [nAno], inteiro, Guarda a indade em anos de uma pessoa.
@param: [nMes], inteiro, Guarda a indade em meses de uma pessoa.
@param: [nDia], inteiro, Guarda a indade em dias de uma pessoa.

@return: num�rico, Informar em anos, meses e dias.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nIdade = 0, nAno = 0, nMes = 0, nDia = 0; 
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nIdade);

	/*Calculando Anos*/	
	nAno = nIdade/365;//retorna s� o inteiro da divis�o.
	
	/*Calculando Meses*/
	nMes = (nIdade - (nAno * 365))/30;//necess�rio caso a quantidade de anos atinja 1 ou mais.

	/*Calculando Dias*/
	nDia = nIdade - (nMes * 30) - (nAno * 365);//necess�rio caso a quantidade de meses atinja 1 ou mais.

	
	/*Mostrando na tela o valor anos, meses e dias*/
	printf("%d ano(s)\n", nAno);
	printf("%d mes(es)\n", nMes);
	printf("%d dia(s)\n", nDia);
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}

