#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Esfera

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que calcula e mostra o volume de uma esfera sendo fornecido o valor de seu raio (R). 
              A fórmula para calcular o volume é: (4/3) * pi * R³. Considere (atribua) para pi o valor 3.14159. 		      
@param: [nRaio], double, Guarda o primeiro numero digitado pelo usuário.
@param: [nVol], double, Guarda o calculo do volume de uma esfera: (4/3) * pi * pow(nRaio,3).

@return: numerico, mostra o volume da esfera.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nRaio = 0.00, nVol = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nRaio);
	
	/*Calculando o valor do volume*/	
	nVol = (4/3.0) * 3.14159 * pow(nRaio,3);//pow é a função responsável em excutar a potenciação de uma variável. sintaxe: pow([base],[expoente]. => nR³
											//a expreção (4/3.0) não foi utilizada assim (4/3), pois a linguagem C pode assumir 
											//que a divisão de dois inteiros resulta em outro inteiro
		
	/*Mostrando na tela o volume*/
	printf("VOLUME = %.3lf\n", nVol);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
