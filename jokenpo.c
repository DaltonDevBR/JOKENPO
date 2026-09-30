#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int PontuacaoPc = 0, PontuacaoHm = 0, JogadaHm, JogadaPc;
	srand(time(NULL));
	
	printf("========================================\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||           HUMANO Vs PC             ||\n");
    printf("||             JOKENPO                ||\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||       Pressione ENTER para         ||\n");
    printf("||       iniciar a partida...         ||\n");
    printf("||                                    ||\n");
    printf("========================================\n");
    getchar();
    system("clear");
	
	
	do{
		JogadaPc = rand() % 2;
		printf("\nEscolha pedra, papel ou tesoura:\n");
		printf("[0] Pedra \n");
		printf("[1] Tesoura\n");
		printf("[2] Papel\n");
		scanf("%i", &JogadaHm);
		getchar();
		system("clear");
		if(JogadaHm >= 0 && JogadaHm <= 2)
		{	
			if(JogadaHm == JogadaPc)
			{
				printf("\n Vcs escolheram a mesma opcao resultando em empate!\n");
				PontuacaoPc++;
				PontuacaoHm++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			
			if(JogadaHm == 0 && JogadaPc == 1)
			{
				printf("\n O HUMANO ganhou\n");
				PontuacaoHm++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			
			if(JogadaHm == 1 && JogadaPc == 0)
			{
				printf("\n O Pc ganhou\n");
				PontuacaoPc++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			if(JogadaHm == 0 && JogadaPc == 2)
			{
				printf("\n O Pc ganhou\n");
				PontuacaoPc++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			if(JogadaHm == 2 && JogadaPc == 0)
			{
				printf("\n O HUMANO ganhou\n");
				PontuacaoHm++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			if(JogadaHm == 2 && JogadaPc == 1)
			{
				printf("\n O Pc ganhou\n");
				PontuacaoPc++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
			if(JogadaHm == 1 && JogadaPc == 2)
			{
				printf("\n O HUMANO ganhou\n");
				PontuacaoHm++;
				printf("PC==[%i]\n", PontuacaoPc);
				printf("HUMANO==[%i]\n", PontuacaoHm);
			}
		}else
			printf("A opcao que vc digitou nao existe");
			
	}while(PontuacaoPc != 5 && PontuacaoHm != 5);
		if(PontuacaoPc > PontuacaoHm)
			printf("O Pc foi o ganhador -_-");
		else
			printf("O Humano foi o ganhador !!");
		
	return 0;
}

