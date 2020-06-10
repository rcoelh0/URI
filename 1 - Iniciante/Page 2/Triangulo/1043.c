#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Triângulo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
			  Em caso positivo, calcule o perímetro do triângulo.
			  Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura
			  
@param: [nA], double, Guarda a primeira variável digitada pelo usuário.
@param: [nB], double, Guarda a segunda variável digitada pelo usuário.
@param: [nC], double, Guarda a terceira variável digitada pelo usuário.
@param: [nRes], double, Guarda o perimetro do triângulo(nA + nB + nC) ou a área do trapézio ([(nA + nB) * nC]/2).

@return: caractere, Em caso porsitivo (é um triângulo) imprimir: Perimetro = XX.X.
 					Em caso negativo (é um trapézio) imprimir: Area = XX.X
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nA = 0.0, nB = 0.0, nC = 0.0, nRes = 0.0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Verificando se é um triângulo (https://brasilescola.uol.com.br/matematica/triangulo.htm)*/
	if((abs(nB - nC) < nA && nA < (nB + nC)) && (abs(nA - nC) < nB && nB < (nA + nC)) && (abs(nB - nA) < nC && nC < (nB + nA)))
	{
		nRes = nA + nB + nC;
		printf("Perimetro = %.1lf\n",nRes);
	}
	else
	{
		nRes = (((nA + nB) * nC)/2);
		printf("Area = %.1lf\n",nRes);
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
