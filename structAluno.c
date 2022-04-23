#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	
	setlocale(LC_ALL,"");
	
	//defininindo uma estrutura pra cadastro de aluno
	struct cadastroAluno {
		char nome[50];
		int idade;
		int matricula;
		char curso[100];
		float mensalidade;
	};
	
	
	//declarando estrutur pro aluno1
	struct cadastroAluno aluno1;
	
	
	strcpy(aluno1.nome,"Matheus");
	aluno1.idade = 22;
	strcpy(aluno1.curso,"Ciência da Computação");
	aluno1.matricula = 2021200020;
	aluno1.mensalidade = 793.50;
	
	
	//mudança na mensalidade
	struct cadastroAluno maisValor;
	maisValor.mensalidade = aluno1.mensalidade + 300.29;
	
	
	printf(" ********************* ESTRUTURA EM C ********************* \n");
	printf("Nome do aluno: %s \n",aluno1.nome);
	printf("Idade: %d \n",aluno1.idade);
	printf("Curso: %s \n",aluno1.curso);
	printf("Nr Matrícula: %d \n",aluno1.matricula);
	printf("Valor da Mensalidade: %.2f \n",aluno1.mensalidade);
	printf("Valor da Mensalidade: %.2f \n",maisValor.mensalidade);
	
	
	system("pause");
	return 0;	
}
