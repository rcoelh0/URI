#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: imposto de renda

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, 
			  pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, 
			  sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.
			  Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida, 
			  calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

								Renda				Imposto
								0 	     - 2000.00     isento
								2000.01  - 3000.00       8%
								3000.01  - 4500.00      18%
								Acima  de 4500.00       28%

			 Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, 
			 pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. 
			 No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. 
			 O valor deve ser impresso com duas casas decimais.
			 
@param: [nRenda], double, Guarda o primeiro numero digitado pelo usuário.
@param: [nDesc], double, Guarda o valor do desconto.

@return: caractere, Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto. 
					Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nRenda = 0.00, nDesc = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nRenda);
	
	if(nRenda >= 0.00 && nRenda <= 2000.00)
	{
		printf("Isento\n");	
	}
	
	if(nRenda >= 2000.01 && nRenda <= 3000.00)
	{
		nDesc = (nRenda - 2000.00) * 0.08;
		printf("R$ %.2lf\n", nDesc);	
	}
	
	if(nRenda >= 3000.01 && nRenda <= 4500.00)
	{
		nDesc = ((nRenda - 3000.00) * 0.18) + (1000 * 0.08);
		printf("R$ %.2lf\n", nDesc);	
	}
	
	if(nRenda > 4500.00)
	{
		nDesc = ((nRenda - 4500.00) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
		printf("R$ %.2lf\n", nDesc);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
