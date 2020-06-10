#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tri�ngulo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo. 
			  Em caso positivo, calcule o per�metro do tri�ngulo.
			  Em caso negativo, calcule a �rea do trap�zio que tem A e B como base e C como altura
			  
@param: [nA], double, Guarda a primeira vari�vel digitada pelo usu�rio.
@param: [nB], double, Guarda a segunda vari�vel digitada pelo usu�rio.
@param: [nC], double, Guarda a terceira vari�vel digitada pelo usu�rio.
@param: [nRes], double, Guarda o perimetro do tri�ngulo(nA + nB + nC) ou a �rea do trap�zio ([(nA + nB) * nC]/2).

@return: caractere, Em caso porsitivo (� um tri�ngulo) imprimir: Perimetro = XX.X.
 					Em caso negativo (� um trap�zio) imprimir: Area = XX.X
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	double nA = 0.0, nB = 0.0, nC = 0.0, nRes = 0.0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Verificando se � um tri�ngulo (https://brasilescola.uol.com.br/matematica/triangulo.htm)*/
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
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
