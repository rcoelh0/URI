#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Média 3

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. 
              Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela 
			  mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada 
			  for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, 
			  o programa deve imprimir a mensagem "Aluno em exame.".
			  No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. 
			  Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a média 
			  (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) 
			  ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) 
			  apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.
			  
@param: [nN1], double, Guarda o primeiro número digitado pelo usuário.
@param: [nN2], double, Guarda o segundo número digitado pelo usuário.
@param: [nN3], double, Guarda o terceiro número digitado pelo usuário.
@param: [nN4], double, Guarda o quarto número digitado pelo usuário.
@param: [nE], double, Guarda o quinto número digitado pelo usuário.
@param: [MEDIA], double, Guarda a media entre as variáveis ((nN1 * 2) + (nN2 * 3) + (nN3 * 4) + (nN4))/10.

@return: caractere, Todas as respostas devem ser apresentadas com uma casa decimal. 
                    As mensagens devem ser impressas conforme a descrição do problema. 
					Não esqueça de imprimir o enter após o final de cada linha, caso contrário obterá "Presentation Error"..

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nN1 = 0.0, nN2 = 0.0, nN3 = 0.0, nN4 = 0.0, nE = 0.0, MEDIA = 0.0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%4lf",&nN1);//%4lf limita a digitação do usuário a 4 caractere.
	scanf("%4lf",&nN2);
	scanf("%4lf",&nN3);
	scanf("%4lf",&nN4);
	
	/*As variáveis nN1, nN2, nN3 e nN4 devem ser maior ou igual a zero e menor ou igual a 10*/
	if(nN1 >= 0.0 && nN1 <= 10.0 && nN2 >= 0.0 && nN2 <= 10.0 && nN3 >= 0.0 && nN3 <= 10.0 && nN4 >= 0.0 && nN4 <= 10.0)
	{
		/*Calculando o valo de MEDIA*/	
		MEDIA = ((nN1 * 2) + (nN2 * 3) + (nN3 * 4) + (nN4))/10;	
		
		if(MEDIA >= 7.0)
		{
			/*Mostrando na tela o valor de MEDIA com uma casa decimal*/
			printf("Media: %.1lf\n", MEDIA);
			printf("Aluno aprovado.\n");	
		}
		else if(MEDIA < 5.0)
		{
			/*Mostrando na tela o valor de MEDIA com uma casa decimal*/
			printf("Media: %.1lf\n", MEDIA);
			printf("Aluno reprovado.\n");			
		}
		else
		{
			printf("Media: %.1lf\n", MEDIA);
			printf("Aluno em exame.\n");
			scanf("%4lf",&nE);
			printf("Nota do exame: %.1lf\n", nE);
			
			MEDIA = (MEDIA + nE)/2;
			
			if(MEDIA >= 5.0)
			{
				printf("Aluno aprovado.\n");
				printf("Media final: %.1lf\n", MEDIA);
			}
			else
			{
				printf("Aluno reprovado.\n");
				printf("Media final: %.1lf\n", MEDIA);
			}
			
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
