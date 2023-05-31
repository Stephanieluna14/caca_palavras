	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <ctype.h>
	#include <string.h>
	#include <time.h>
	
	void explicar(), inserirPalavras(), cacaPalavras(), tabela1(), tabela2(), tabela3();
	char caca[11][11], palavras[6][15];
	int sortear;
	
	int main () {
		
		setlocale(LC_ALL, "Portuguese");
		
		int certas = 0, totalPalavras = -1, contador = 0;
		int y = 0, x = 0, quantidadeLetras, erros = 0, contar = 0, chances = 0;
		char palavraEscrita[50], totalEscritas[50][20];
		bool ganhou, repetiu;
		char escritasCertas[6][15];
		
		explicar();
		
		srand(time(NULL));
		  sortear = rand()%3;
		  for(y = 0; y < 11; y++) {
		  	  for(x = 0; x < 11; x++) {
		  	  	caca[y][x] = ' ';
				}
		  }
		  
		for(y = 0; y < 11; y++) {
			for(x = 0; x < 11; x++) {
			    if(caca[y][x] == ' ') {
			    	caca[y][x] = 'a' + (char)(rand()%26);
				}
			}
		}
		
		while(certas != 6) {
			quantidadeLetras = 0;
			ganhou = false;
			repetiu = false;
			
			inserirPalavras();
			
			cacaPalavras();
			
			printf("\n\nInsira a palavra que você encontrou: ");
			gets(palavraEscrita);
			system("cls");
			
			printf("\nPalavras que já foram escritas %d", chances + 1);
			chances++;
			
			quantidadeLetras = strlen(palavraEscrita);
			
		for(contador = 0; contador < quantidadeLetras; contador++) {
			palavraEscrita[contador] = tolower(palavraEscrita[contador]);
	     }
		
		for(contador = 0; contador < chances; contador++) {
			if(strcmp(palavraEscrita, escritasCertas[contador]) == 0){
				repetiu = true;
			}
		}
		
		totalPalavras++;
		strcpy(totalEscritas[totalPalavras], palavraEscrita);
		
		for(y = 0; y < 6; y++) {
			if(strcmp(totalEscritas[totalPalavras], palavras[y]) == 0){
				strcpy(escritasCertas[certas], palavraEscrita);
				ganhou = true;
			}
		}
		
		if(ganhou == true) {
			certas++;
			printf("\nAcertou a palavra!\n");
		}else{
			printf("\nErrou a palavra! Tente de novo!\n");
			erros++;
		}
		
		if(repetiu == true) {
			printf("Palavra repetida.");
			certas--;
		}else{
			printf("A palavra não é repetida.");
		}
		
		printf("\n_________________________________");
		printf("\nTotal de palavras escritas: ");
		for(y = 0; y < chances; y++){
			printf("%s ", totalEscritas[y]);
		}
		
		printf("\n_________________________________");
		printf("\nPalavras certas escritas: \n");
		   for(y = 0; y < certas; y++) {
		   	 printf("\n%s ", escritasCertas[y]);
		}
		
		printf("\n\t\t____________________________________\n");
		}
		
		printf("\n\t\t             Questionario             \n");
		printf("\n\t\t_____________________________________\n");
		  for(y = 0; y < 11; y++) {
		  	 for(x = 0; x < 11; x++) {
		  	 	caca[y][x] = ' ';
			   }
		  }
		  
		inserirPalavras();
		cacaPalavras();
		
		if(erros != 0) {
			printf("\n\nVocê inseriu %d palavras erradas!", erros);
		}else {
			printf("\n\nVocê não inseriu nenhuma palavra errada!");
		}
		
		printf("\n____________________________________");
	}
	
	void tabela1(void) {
		
		strcpy(palavras[0], "gucci");
		strcpy(palavras[1], "versace");
		strcpy(palavras[2], "valentino");
		strcpy(palavras[3], "prada");
		strcpy(palavras[4], "chanel");
		strcpy(palavras[5], "dior");
		
		caca[0][0] = 'g';
		caca[0][1] = 'u';
		caca[0][2] = 'c';
		caca[0][3] = 'c';
		caca[0][4] = 'i';
		
		caca[0][9] = 'v';
		caca[1][9] = 'e';
		caca[2][9] = 'r';
		caca[3][9] = 's';
		caca[4][9] = 'a';
		caca[5][9] = 'c';
		caca[6][9] = 'e';
		
		caca[1][0] = 'v';
		caca[2][1] = 'a';
		caca[3][2] = 'l';
		caca[4][3] = 'e';
		caca[5][4] = 'n';
		caca[6][5] = 't';
		caca[7][6] = 'i';
		caca[8][7] = 'n';
		caca[9][8] = 'o';
		
		caca[4][4] = 'p';
		caca[3][5] = 'r';
		caca[2][6] = 'a';
		caca[1][7] = 'd';
		caca[0][8] = 'a';
		
		caca[9][1] = 'c';
		caca[9][2] = 'h';
		caca[9][3] = 'a';
		caca[9][4] = 'n';
		caca[9][5] = 'e';
		caca[9][6] = 'l';
		
		caca[9][0] = 'd';
		caca[8][1] = 'i';
		caca[7][2] = 'o';
		caca[6][3] = 'r';
	}
	
	void tabela2(void) {
		
		strcpy(palavras[0], "dolar");
		strcpy(palavras[1], "euro");
		strcpy(palavras[2], "libra");
		strcpy(palavras[3], "iene");
		strcpy(palavras[4], "franco");
		strcpy(palavras[5], "real");
		
		caca[0][8] = 'd';
		caca[1][8] = 'o';
		caca[2][8] = 'l';
		caca[3][8] = 'a';
		caca[4][8] = 'r';
		
		caca[0][0] = 'e';
		caca[1][0] = 'u';
		caca[2][0] = 'r';
		caca[3][0] = 'o';
		
		caca[8][0] = 'l';
		caca[7][1] = 'i';
		caca[6][2] = 'b';
		caca[5][3] = 'r';
		caca[4][4] = 'a';
		
		caca[9][6] = 'i';
		caca[9][7] = 'e';
		caca[9][8] = 'n';
		caca[9][9] = 'e';
		
		caca[1][2] = 'f';
		caca[2][3] = 'r';
		caca[3][4] = 'a';
		caca[4][5] = 'n';
		caca[5][6] = 'c';
		caca[6][7] = 'o';
		
		caca[0][3] = 'r';
		caca[0][4] = 'e';
		caca[0][5] = 'a';
		caca[0][6] = 'l';
	}
	
	void tabela3(void) {
		
		strcpy(palavras[0], "mercedes");
		strcpy(palavras[1], "audi");
		strcpy(palavras[2], "bugatti");
		strcpy(palavras[3], "mitsubishi");
		strcpy(palavras[4], "ferrari");
		strcpy(palavras[5], "lamborghini");
		
		caca[0][10] = 'm';
		caca[1][10] = 'e';
		caca[2][10] = 'r';
		caca[3][10] = 'c';
		caca[4][10] = 'e';
		caca[5][10] = 'd';
		caca[6][10] = 'e';
		caca[7][10] = 's';
		
		caca[3][5] = 'a';
		caca[2][6] = 'u';
		caca[1][7] = 'd';
		caca[0][8] = 'i';
	
		caca[3][1] = 'b';
		caca[4][1] = 'u';
		caca[5][1] = 'g';
		caca[6][1] = 'a';
		caca[7][1] = 't';
		caca[8][1] = 't';
		caca[9][1] = 'i';
		
		caca[10][1] = 'm';
		caca[10][2] = 'i';
		caca[10][3] = 't';
		caca[10][4] = 's';
		caca[10][5] = 'u';
		caca[10][6] = 'b';
		caca[10][7] = 'i';
		caca[10][8] = 's';
		caca[10][9] = 'h';
		caca[10][10] = 'i';
		
		caca[8][2] = 'f';
		caca[7][3] = 'e';
		caca[6][4] = 'r';
		caca[5][5] = 'r';
		caca[4][6] = 'a';
		caca[3][7] = 'r';
		caca[2][8] = 'i';
		
		caca[0][0] = 'l';
		caca[1][1] = 'a';
		caca[2][2] = 'm';
		caca[3][3] = 'b';
		caca[4][4] = 'o';
		caca[5][5] = 'r';
		caca[6][6] = 'g';
		caca[7][7] = 'h';
		caca[8][8] = 'i';
		caca[9][9] = 'n';
		caca[10][10] = 'i';
	}
	
	void explicar(void) {
		printf("__________________________________\n");
		printf("_          Caça Palavras         _\n");
		printf("__________________________________\n");
		printf("Insira a palavra sem acentos.\n");
		printf("Insira uma palavra por vez.\n");
		printf("Há 6 palavras no jogo.\n");
		printf("___________________________________");
	}
	
	void cacaPalavras(void){
		int y, x;
		
		printf("\n\t________________________________________________________");
		      for(y = 0; y < 11; y++){
		      	 printf("      \n    \t| ");
		      	 for(x = 0; x < 11; x++){
		      	 	printf(" %c | ", caca[y][x]);
			    }
			    printf("\n\t________________________________________________________");
			  }
	}
	
	void inserirPalavras(void){
		switch(sortear){
			case 0:
				printf("\n\t\t          Marcas de grife");
				tabela1();
			break;
			case 1:
				printf("\n\t\t            Moedas");
				tabela2();
			break;
			case 2:
				printf("\n\t\t           Carros de luxo");
				tabela3();
			break;
		}
	}
