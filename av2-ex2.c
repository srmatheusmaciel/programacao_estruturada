/* Faça um programa declarando uma variável estática x do tipo float e uma variável dinâmica p
também do tipo float. 

O programa deve pedir para o usuário fornecer um valor para a variável
estática.

 Depois deve colocar o endereço de memória da variável dinâmica igual ao endereço de
memória da variável estática e 

atribuir a variável estática o valor *p / 3. No final o programa deve
imprimir na tela o endereço de p e o valor da variável estática x com 2 casas decimais. */

#include <stdio.h>
#include <locale.h>

int main (void){
	
	// Faça um programa declarando uma variável estática x do tipo float e uma variável dinâmica p também do tipo float. 
	float x;
	float *p = NULL;
	
	setlocale(LC_ALL,"");
	//O programa deve pedir para o usuário fornecer um valor para a variável estática
	printf("**********| EXERCÍCIO 1 - TRABALHO ACADÊMICO         |********** \n");
printf("**********| PROGRAMAÇÃO ESTRUTURADA - PROF ROGÉRIO   |********** \n");
printf("**********| ======================================== |********** \n");
printf("**********|TURMA:922 ALUNO:MATHEUS DE OLIVEIRA MACIEL|********** \n");
printf("**********| MATRÍCULA: 2021200020 - UNICARIOCA MEIER |********** \n");
printf("**********| ======================================== |********** \n");

printf("**********| ================== INÍCIO ====================== |********** \n\n");
	printf("Forneça o valor de X: \n");
	scanf("%f",&x);	
	
	//Depois deve colocar o endereço de memória da variável dinâmica igual ao endereço de memória da variável estática
	p = &x;
	
	//atribuir a variável estática o valor *p / 3.
	x = (float)*p/3;
	
	//No final o programa deve imprimir na tela o endereço de p e o valor da variável estática x com 2 casas decimais.
	printf("O endereço de p é: %p \n",&p);
	printf("O valor de x é: %.2f \n",x);
	printf("================== FIM DO PROGRAMA ======================\n\n");
	system("pause");
	return 0;
}

