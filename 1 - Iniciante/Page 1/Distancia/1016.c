#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Distância

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
			  Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
              Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.
@param: [nDis], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [nTemp], inteiro, Guarda o resultado da expreção nDis * 2.

@return: numérico, Imprima o tempo necessário seguido da mensagem "minutos"..
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nDis = 0, nTemp = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nDis);
	
	/*Calculando o valo de nTemp*/	
	nTemp = nDis * 2;
	
	/*Mostrando na tela o valor de nTemp*/
	printf("%d minutos\n", nTemp);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
