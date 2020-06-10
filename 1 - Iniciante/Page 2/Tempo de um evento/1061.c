#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*/
@type: Function - int main()
@title: Tempo de um evento

@author: Rafael Lima Coelho
@since: 05-07-2019
@version: RLC.8.0.URI

@description: Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. 
              O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.
			  Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.
			 
@param: [nDia1],  inteiro, O primeiro dia informado pelo usuário.
@param: [nHora1], inteiro, O primeira hora informado pelo usuário.
@param: [nMin1],  inteiro, O primeiro minuto informado pelo usuário.
@param: [nSeg1],  inteiro, O primeiro segundo informado pelo usuário.
@param: [nDia2],  inteiro, O segundo dia informado pelo usuário.
@param: [nHora2], inteiro, O segunda hora informado pelo usuário.
@param: [nMin2],  inteiro, O segundo minuto informado pelo usuário.
@param: [nSeg2],  inteiro, O segundo segundo informado pelo usuário.
@param: [nW],     inteiro, Variável de saida que informa a quantidade de dias.
@param: [nH],     inteiro, Variável de saida que informa a quantidade de horas.
@param: [nM],     inteiro, Variável de saida que informa a quantidade de minutos.
@param: [nS],     inteiro, Variável de saida que informa a quantidade de segundos.
@param: [nAux1],  double , Primeira variável auxiliar.
@param: [nAux2],  double , Segunda variável auxiliar.
@param: [nSub],   double , Terceira variável auxiliar armazena a subtração das variaveis Aux2 - Aux1.


@return: caractere, Na saída, deve ser apresentada a duração do evento, no seguinte formato:
					
					W dia(s)
					X hora(s)
					Y minuto(s)
					Z segundo(s)
					
					Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nAux1, nAux2, nSub;
	double nW, nH, nM, nS;
	int nDia1 = 0, nHora1 = 0, nMin1 = 0, nSeg1 = 0;
	int nDia2 = 0, nHora2 = 0, nMin2 = 0, nSeg2 = 0;
	char dia[4], pontos;
	
	/*Primeiro grupo de informações geradas peli usuário*/
//	printf("Dia ");
	scanf("%s %d",&dia,&nDia1);	
	scanf("%d %c %d %c %d",&nHora1,&pontos,&nMin1,&pontos,&nSeg1);

	/*Segundo grupo de informações geradas peli usuário*/
//	printf("Dia ");
	scanf("%s %d",&dia,&nDia2);	
	scanf("%d %c %d %c %d",&nHora2,&pontos,&nMin2,&pontos,&nSeg2);
	
	if((nHora1 >= 0) && (nHora2 >= 0) && (nMin1 >= 0) && (nMin2 >= 0) && (nSeg1 >= 0) && (nSeg2 >= 0))
	{
		if((nDia1 >= 1 && nDia1 <= 30) && (nDia2 >= nDia1 && nDia2 <= 30) && (nHora1 <= 23) && (nHora2 <= 23) && (nMin1 <= 59) && (nMin2 <= 59) && (nSeg1 <= 59) && (nSeg2 <= 59)) 
		{
			/*Variavel auxiliar 1 que guarda a quantidade de dias horas minutos e segundos somados e convertidos em segundos*/
			nAux1 = (nDia1 * 24 * 60 * 60) + (nHora1 * 60 * 60) + (nMin1 * 60)  + (nSeg1); 
			
			/*Variavel auxiliar 2 que guarda a quantidade de dias horas minutos e segundos somados e convertidos em segundos*/
			nAux2 = (nDia2 * 24 * 60 * 60) + (nHora2 * 60 * 60) + (nMin2 * 60)  + (nSeg2); 
			
			/*Tempo da festa em segundos*/
			nSub = nAux2 - nAux1;	
		} 	
	}
	
	if((nSub >= 60) && (nSub <= 2592000)) //2678340 - 86400
	{
				
		/*Separação do tempo em quantidade de Dias*/
		nW = truncf((((nSub/24)/60)/60));
				
		if(nDia1 == nDia2)
		{
			nW = 0;
		}
		
		/*Separação do tempo em quantidade de horas*/
		nH = truncf((((((nSub/24)/60)/60) - nW) * 24));
		
		if(nHora1 == nHora2)
		{
			nH = 0;
		}
		
		/*Separação do tempo em quantidade de minutos*/
		nM = truncf((((((((nSub/24)/60)/60) - nW) * 24) - nH) * 60));
		
		if(nMin1 == nMin2)
		{
			nM = 0;
		}
		
		/*Separação do tempo em quantidade de segundos*/
		nS = truncf((((((((((nSub/24)/60)/60) - nW) * 24) - nH) * 60) - nM) * 60));
		
		/*As procimas condições servem apenas para zerar os valores iguais*/						
		if(nSeg1 == nSeg2)
		{
			nS = 0;
		}
					
		/*Impressão do resultado*/
		printf("%.0lf dia(s)\n",nW);
		printf("%.0lf hora(s)\n",nH);
		printf("%.0lf minuto(s)\n",nM);
		printf("%.0lf segundo(s)\n",nS);	
	}
	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
