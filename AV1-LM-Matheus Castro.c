#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	// função para colocar os caracteres do teclado em português
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
    char nome[50];
	
    printf("\t\t\n Olá, Digite seu nome: ");
    	fgets(nome,50,stdin);

    system("cls");
    
    printf("\n\n\ ------------------------ Sistema de Recomendação de Filmes por Gênero ------------------------ \n\n");
	
    printf("\n Seja Bem Vindo, %s \n", nome);
    
    printf("\n Digite o número correspondente à dois filmes de sua preferência: \n\n");

    printf(" Lista de Filmes: \n\n");
    
    // vetor com os nomes dos filmes disponíveis no catálogo
    
    char filme[10][30] = {"THOR:RAGNAROK","AVENGERS:ULTIMATO","SPIDERMAN:HOMECOMING","ANABELLE:3","IT:A_COISA","CORRA!","DUNKIRK","BASTARDOS_INGLÓRIOS","1917","CORINGA"};
    
    // for para printar os filmes na tela
    
    for(i=0;i<=9;i++){
    	printf(" %i°) %s\n",i,filme[i]);
		}
		
	// variáveis de decisão 
	
   	int escolha1;
   	int escolha2;
   
   	printf("\n\n Primeiro Filme: ");
   		scanf("%d", &escolha1);
   	
   	printf("\n Segundo Filme: ");
   		scanf("%d", &escolha2);
   	
   	system("cls");
    
    printf("\n\n\tGerando Resultado");
    sleep(1);
    
    printf(".");
    sleep(1);
    
    printf(".");
    sleep(1);
    
    printf(".\n\n");
    
    
	if ((escolha1 == 0) && (escolha2 == 1)){
    	printf("\n Recomendamos o Filme: %s \n", filme[2]);
	}
	if ((escolha1 == 0) && (escolha2 == 2)){
    	printf("\n Recomendamos o Filme: %s \n", filme[1]);
	}
	if ((escolha1 == 0) && (escolha2 == 3,4,5,6,7,8,9)){
		printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//-------------------------------------------------
	if ((escolha1 == 1) && (escolha2 == 0)){
    	printf("\n Recomendamos o Filme: %s \n", filme[2]);
	}
	if ((escolha1 == 1) && (escolha2 == 2)){
    	printf("\n Recomendamos o Filme: %s \n", filme[0]);
	}
	if ((escolha1 == 1) && (escolha2 == 3,4,5,6,7,8,9)){
		printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//--------------------------------------------------
	if ((escolha1 == 2) && (escolha2 == 0)){
    	printf("\n Recomendamos o Filme: %s \n", filme[1]);
	}
	if ((escolha1 == 2) && (escolha2 == 1)){
    	printf("\n Recomendamos o Filme: %s \n", filme[0]);
	}
	if ((escolha1 == 2) && (escolha2 == 3,4,5,6,7,8,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//---------------------------------------------------
	if ((escolha1 == 3) && (escolha2 == 4)){
    	printf("\n Recomendamos o Filme: %s \n", filme[5]);
	}
	if ((escolha1 == 3) && (escolha2 == 5)){
    	printf("\n Recomendamos o Filme: %s \n", filme[4]);
	}
	if ((escolha1 == 3) && (escolha2 == 0,1,2,6,7,8,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//----------------------------------------------------
	if ((escolha1 == 4) && (escolha2 == 3)){
    	printf("\n Recomendamos o Filme: %s \n", filme[5]);
	}
	if ((escolha1 == 4) && (escolha2 == 5)){
    	printf("\n Recomendamos o Filme: %s \n", filme[3]);
	}
	if ((escolha1 == 4) && (escolha2 == 0,1,2,6,7,8,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//----------------------------------------------------
	if ((escolha1 == 5) && (escolha2 == 3)){
    	printf("\n Recomendamos o Filme: %s \n", filme[4]);
	}
	if ((escolha1 == 5) && (escolha2 == 4)){
    	printf("\n Recomendamos o Filme: %s \n", filme[3]);
	}
	if ((escolha1 == 5) && (escolha2 == 0,1,2,6,7,8,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//-----------------------------------------------------
	if ((escolha1 == 6) && (escolha2 == 7)){
    	printf("\n Recomendamos o Filme: %s \n", filme[8]);
	}
	if ((escolha1 == 6) && (escolha2 == 8)){
    	printf("\n Recomendamos o Filme: %s \n", filme[7]);
	}
	if ((escolha1 == 6) && (escolha2 == 0,1,2,3,4,5,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//-----------------------------------------------------
	
	if ((escolha1 == 7) && (escolha2 == 6)){
    	printf("\n Recomendamos o Filme: %s \n", filme[8]);
	}
	if ((escolha1 == 7) && (escolha2 == 8)){
    	printf("\n Recomendamos o Filme: %s \n", filme[6]);
	}
	if ((escolha1 == 7) && (escolha2 == 0,1,2,3,4,5,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//---------------------------------------------
	if ((escolha1 == 8) && (escolha2 == 6)){
    	printf("\n Recomendamos o Filme: %s \n", filme[7]);
	}
	if ((escolha1 == 8) && (escolha2 == 7)){
    	printf("\n Recomendamos o Filme: %s \n", filme[6]);
	}
	
	if ((escolha1 == 8) && (escolha2 == 0,1,2,3,4,5,9)){
    	printf("\n Recomendamos o Filme: %s \n", filme[9]);
	}
	//------------------------------------------------
	if ((escolha1 == 9) && (escolha2 == 0)){
    	printf("\n Recomendamos o Filme: %s \n", filme[8]);
	}
	if ((escolha1 == 9) && (escolha2 == 1)){
    	printf("\n Recomendamos o Filme: %s \n", filme[7]);
	}
	if ((escolha1 == 9) && (escolha2 == 2)){
    	printf("\n Recomendamos o Filme: %s \n", filme[6]);
	}
	if ((escolha1 == 9) && (escolha2 == 3)){
    	printf("\n Recomendamos o Filme: %s \n", filme[5]);
	}
	if ((escolha1 == 9) && (escolha2 == 4)){
    	printf("\n Recomendamos o Filme: %s \n", filme[4]);
	}
	if ((escolha1 == 9) && (escolha2 == 5)){
    	printf("\n Recomendamos o Filme: %s \n", filme[3]);
	}
	if ((escolha1 == 9) && (escolha2 == 6)){
    	printf("\n Recomendamos o Filme: %s \n", filme[2]);
	}
	if ((escolha1 == 9) && (escolha2 == 7)){
    	printf("\n Recomendamos o Filme: %s \n", filme[1]);
	}
	if ((escolha1 == 9) && (escolha2 == 8)){
    	printf("\n Recomendamos o Filme: %s \n", filme[0]);
	}
	
	//-----------------------------------------------
	if(escolha1 == escolha2){
		
		printf("\n Recomendamos o Filme: %s e %s\n", filme[escolha1], filme[9]);
	}
	
	printf("\n\n Developed by @MatheusCastro - Matrícula: 2018101496.");
}
