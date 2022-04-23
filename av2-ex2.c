/* Fa�a um programa declarando uma vari�vel est�tica x do tipo float e uma vari�vel din�mica p
tamb�m do tipo float. 

O programa deve pedir para o usu�rio fornecer um valor para a vari�vel
est�tica.

 Depois deve colocar o endere�o de mem�ria da vari�vel din�mica igual ao endere�o de
mem�ria da vari�vel est�tica e 

atribuir a vari�vel est�tica o valor *p / 3. No final o programa deve
imprimir na tela o endere�o de p e o valor da vari�vel est�tica x com 2 casas decimais. */

#include <stdio.h>
#include <locale.h>

int main (void){
	
	// Fa�a um programa declarando uma vari�vel est�tica x do tipo float e uma vari�vel din�mica p tamb�m do tipo float. 
	float x;
	float *p = NULL;
	
	setlocale(LC_ALL,"");
	//O programa deve pedir para o usu�rio fornecer um valor para a vari�vel est�tica
	printf("**********| EXERC�CIO 1 - TRABALHO ACAD�MICO         |********** \n");
printf("**********| PROGRAMA��O ESTRUTURADA - PROF ROG�RIO   |********** \n");
printf("**********| ======================================== |********** \n");
printf("**********|TURMA:922 ALUNO:MATHEUS DE OLIVEIRA MACIEL|********** \n");
printf("**********| MATR�CULA: 2021200020 - UNICARIOCA MEIER |********** \n");
printf("**********| ======================================== |********** \n");

printf("**********| ================== IN�CIO ====================== |********** \n\n");
	printf("Forne�a o valor de X: \n");
	scanf("%f",&x);	
	
	//Depois deve colocar o endere�o de mem�ria da vari�vel din�mica igual ao endere�o de mem�ria da vari�vel est�tica
	p = &x;
	
	//atribuir a vari�vel est�tica o valor *p / 3.
	x = (float)*p/3;
	
	//No final o programa deve imprimir na tela o endere�o de p e o valor da vari�vel est�tica x com 2 casas decimais.
	printf("O endere�o de p �: %p \n",&p);
	printf("O valor de x �: %.2f \n",x);
	printf("================== FIM DO PROGRAMA ======================\n\n");
	system("pause");
	return 0;
}

