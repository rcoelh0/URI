#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Esfera

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que calcula e mostra o volume de uma esfera sendo fornecido o valor de seu raio (R). 
              A f�rmula para calcular o volume �: (4/3) * pi * R�. Considere (atribua) para pi o valor 3.14159. 		      
@param: [nRaio], double, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nVol], double, Guarda o calculo do volume de uma esfera: (4/3) * pi * pow(nRaio,3).

@return: numerico, mostra o volume da esfera.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	double nRaio = 0.00, nVol = 0.00;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nRaio);
	
	/*Calculando o valor do volume*/	
	nVol = (4/3.0) * 3.14159 * pow(nRaio,3);//pow � a fun��o respons�vel em excutar a potencia��o de uma vari�vel. sintaxe: pow([base],[expoente]. => nR�
											//a expre��o (4/3.0) n�o foi utilizada assim (4/3), pois a linguagem C pode assumir 
											//que a divis�o de dois inteiros resulta em outro inteiro
		
	/*Mostrando na tela o volume*/
	printf("VOLUME = %.3lf\n", nVol);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
