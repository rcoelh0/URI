#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Media 1

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa calcula a media de dois números do tipo double e imprime na tela o resultado com as seguintes condições: 
			  Os numeros devem ser maior ou igual a zero e menor ou igual a 10, sempre considerando uma casa decimal, o primeiro 
			  numero deve ter peso 3.5 e o segundo deve ter peso 7.5.
@param: [A], double, Guarda o primeiro número digitado pelo usuário.
@param: [B], double, Guarda o segundo número digitado pelo usuário.
@param: [MEDIA], double, Guarda a media entre as variáveis ((A * 3.5) + (B * 7.5))/11.

@return: numérico, A media entre dois doubles com pesos diferentes.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double A = 0.0, B = 0.0, MEDIA = 0.00000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%4lf",&A);//%4lf limita a digitação do usuário a 4 caractere.
	scanf("%4lf",&B);
		
	/*As variáveis A e B devem ser maior ou igual a zero e menor ou igual a 10*/
	if(A >= 0.0 && A <= 10.0 && B >= 0.0 && B <= 10.0)
	{
		/*Calculando o valo de MEDIA*/	
		MEDIA = ((A * 3.5) + (B * 7.5))/11; 
	
		/*Mostrando na tela o valor de MEDIA com 5 casas decimais*/
		printf("MEDIA = %.5lf\n", MEDIA);
	}

	
	/*Retorno da função para o fim do programa*/
	return 0;
}
