#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//faça um programa que leia 2 matrizes M e N e depois imprima na tela a matriz O = 5 * M - 2 * N;

#define linha 4
#define coluna 5


int main() {
	
	setlocale(LC_ALL,"");

float N[linha][coluna];
float M[linha][coluna];
int i,j;
float O[linha][coluna],resultado;



printf("**********| EXERCÍCIO 1 - TRABALHO ACADÊMICO         |********** \n");
printf("**********| PROGRAMAÇÃO ESTRUTURADA - PROF ROGÉRIO   |********** \n");
printf("**********| ======================================== |********** \n");
printf("**********|TURMA:922 ALUNO:MATHEUS DE OLIVEIRA MACIEL|********** \n");
printf("**********| MATRÍCULA: 2021200020 - UNICARIOCA MEIER |********** \n");
printf("**********| ======================================== |********** \n");
printf("**********| PROGRAMA CALCULA MATRIZES BIDIMENSIONAIS |********** \n\n");
printf("faça um programa que leia 2 matrizes M e N e depois imprima na tela a matriz O = 5 * M - 2 * N \n");
printf("**********| ======================================== |********** \n\n");
//recebe o valor de M
for(i=0;i<linha;i++){
	for(j=0;j<coluna;j++){
		
		printf("Digite o valor da posicao (%d.%d) de M: ",i,j);
		scanf("%f",&M[i][j]);
		
		
	}
}


//imprime o valor de M
for (i=0; i<linha; i++){
for (j=0; j<coluna; j++)
printf("Valor de M na posição (%d.%d): %.2f \n ",i,j,M[i][j]);
printf("\n");

}

//recebe o valor de N
for(i=0;i<linha;i++){
	for(j=0;j<coluna;j++){
		
		printf("Digite o valor da posicao (%d.%d) de N: ",i,j);
		scanf("%f",&N[i][j]);
		
		
	}
}

//imprime o valor de N
for (i=0; i<linha; i++){
for (j=0; j<coluna; j++)
printf("Valor de N na posição (%d.%d): %.2f \n ",N[i][j]);
printf("\n");

}

//matriz O = 5 * M - 2 * N;

for(i=0;i<linha;i++){
	for(j=0;j<coluna;j++){
		
		O[i][j] = 5 * M[i][j] - 2 * N[i][j];
		resultado = (float)O[i][j];
		printf("valor de O quando M ta na posição %d.%d e N na posição %d.%d é: %.2f \n",i,j,i,j,O[i][j]);
	}
}

system("pause");
return 0;

}

