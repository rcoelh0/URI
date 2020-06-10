#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Media 2

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa calcula a media de três números do tipo double e imprime na tela o resultado com as seguintes condições: 
			  Os numeros devem ser maior ou igual a zero e menor ou igual a 10, sempre considerando uma casa decimal, o primeiro 
			  numero deve ter peso 2, o segundo deve ter peso 3 e o terceiro numero deve ter peso 5.
@param: [A], double, Guarda o primeiro número digitado pelo usuário.
@param: [B], double, Guarda o segundo número digitado pelo usuário.
@param: [C], double, Guarda o terceiro número digitado pelo usuário.
@param: [MEDIA], double, Guarda a media entre as variáveis ((A * 2) + (B * 3) + (C * 5))/10.

@return: numérico, A media entre três doubles com pesos diferentes.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double A = 0.0, B = 0.0, C = 0.0, MEDIA = 0.00000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%4lf",&A);//%4lf limita a digitação do usuário a 4 caractere.
	scanf("%4lf",&B);
	scanf("%4lf",&C);
		
	/*As variáveis A, B e C devem ser maior ou igual a zero e menor ou igual a 10*/
	if(A >= 0.0 && A <= 10.0 && B >= 0.0 && B <= 10.0)
	{
		/*Calculando o valo de MEDIA*/	
		MEDIA = ((A * 2) + (B * 3) + (C * 5))/10; 
	
		/*Mostrando na tela o valor de MEDIA com uma casa decimal*/
		printf("MEDIA = %.1lf\n", MEDIA);
	}

	
	/*Retorno da função para o fim do programa*/
	return 0;
}
