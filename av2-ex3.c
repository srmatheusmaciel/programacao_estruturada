//PROGRAMA CRIADO PARA CADASTRAR UMA LISTA DE CLIENTES E SALVAR EM UM DOCUMENTO TXT
//DESENVOLVIDO POR: MATHEUS DE OLIVEIRA MACIEL

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

	


//vari�vel contadora
int i;

//vari�vel din�mica que serve pra alocar os dados no documento txt
FILE *file;

//definindo a estrutura lista_clientes
struct lista_clientes {
	char nome[50];
	char sobrenome[50];
	char endereco[100];
	int idade;
	char telefone[20];
	
};

//fun��o principal
int main () {
	/* Configura a localidade para o ambiente padr�o */
	setlocale(LC_ALL,"");
	
	system("cls");
	fflush(stdin);
	
	
	//FILE *file; abre o arquivo cliente.txt e escreve os dados l�.
	file = fopen("cliente.txt","w");
	
	//verifica se o arquivo foi aberto ou n�o.
	if(file == NULL){
		printf("O ARQUIVO N�O PODE SER ABERTO");
		getchar();
		exit(1);
	}
	else{
		printf("**********|      O ARQUIVO FOI ABERTO COM SUCESSO    |********** \n");
	}
	//declarando as estruturas
	struct lista_clientes clientes[10];
	void recebeCliente(struct lista_clientes lista[10]);
	void armazenaCliente(struct lista_clientes lista[10]);
	void imprimeCliente(struct lista_clientes lista[10]);
		
		printf("**********| ======================================== |********** \n");
		printf("**********| EXERC�CIO 3 - TRABALHO ACAD�MICO         |********** \n");
		printf("**********| PROGRAMA��O ESTRUTURADA - PROF ROG�RIO   |********** \n");
		printf("**********| ======================================== |********** \n");
		printf("**********|TURMA:922 ALUNO:MATHEUS DE OLIVEIRA MACIEL|********** \n");
		printf("**********| MATR�CULA: 2021200020 - UNICARIOCA MEIER |********** \n");
		printf("**********| ======================================== |********** \n\n");
		printf("**********| ======================================== |********** \n");
		printf("**********|      PROGRAMA CADASTRO DE CLIENTES       |********** \n");
		printf("**********| ======================================== |********** \n\n");
	
	recebeCliente(clientes);
	armazenaCliente(clientes);
	
	// fun��o que fecha o documento
	fclose(file);
	
	imprimeCliente(clientes);
	
	

	getch();
	system("pause");
	return 0;
}


//Fun��o que recebe as informa��es dos clientes
void recebeCliente (struct lista_clientes lista[10]) {
	
	
for(i=0; i<10; i++) {
    strcpy(lista[i].nome, "NULL");
    lista[i].idade = 0;
     strcpy(lista[i].endereco, "NULL");
    //lista[i].telefone= 0;
    strcpy(lista[i].telefone, "NULL");
}
	
	for(i=0;i<10;i++){
		printf("Digite o primeiro nome do(a) %d� cliente: \n ", i + 1);
	//	scanf("%s%*c",lista[i].nome); 
			gets(lista[i].nome);	
		printf("Digite o sobrenome nome do(a) %s : \n ", lista[i].nome);
		//scanf("%s%*c",lista[i].sobrenome); 
			gets(lista[i].sobrenome);
		
		printf("Digite endere�o do(a) %s (tudo na mesma linha) : \n ", lista[i].nome);
		//scanf("%s%*c",lista[i].endereco); 
			gets(lista[i].endereco);
		
		printf("Digite a idade do(a) %s: \n ",lista[i].nome);
		scanf("\n %d%*c",&lista[i].idade);
		 
		printf("Digite o telefone do(a) %s: \n ", lista[i].nome);
		//scanf("\n %d%*c",&lista[i].telefone); 
		gets(lista[i].telefone);
		printf("\n");
		
	}
	
};

//fun��o que imprime os clientes na tela
void imprimeCliente (struct lista_clientes lista[10])
{
	printf("Nome completo do sexto cliente: %s %s \n",lista[5].nome,lista[5].sobrenome);	
	printf("Endere�o do nono cliente: %s \n",lista[8].endereco);	
	printf("Idade do quarto cliente: %d \n",lista[3].idade);
	printf("Telefone do terceiro cliente: %s \n",lista[2].telefone);
	printf("\n\n");	
	};
		
			
//fun��o que armazena os clientes no documento txt
void armazenaCliente (struct lista_clientes lista[10])
{
	//abre o arquivo no diretorio (cliente.txt)
	file = fopen("cliente.txt","w");

	if(file == NULL){
		printf("O ARQUIVO N�O PODE SER SALVO");
		getchar();
		exit(1);
	}
	else{
		printf("O ARQUIVO FOI SALVO COM SUCESSO \n");
		printf("===== FIM DO PROGRAMA ========= \n");
	}
	
	//Pega os dados e insere no documento txt
		for(i=0;i<10;i++){
		fprintf(file,"(%d� cliente) Nome completo: %s %s| Endere�o: %s | idade: %d | telefone: %s \n\n",i + 1
													  ,lista[i].nome,
													  lista[i].sobrenome,
													  lista[i].endereco,
													  lista[i].idade,
													  lista[i].telefone);	

}
	// fun��o que fecha o documento
	fclose(file);
};

