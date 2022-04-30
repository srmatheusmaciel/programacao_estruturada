//PROGRAMA CRIADO PARA CADASTRAR UMA LISTA DE CLIENTES E SALVAR EM UM DOCUMENTO TXT
//DESENVOLVIDO POR: MATHEUS DE OLIVEIRA MACIEL

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
	


//variável contadora
int i,idade;

//variável dinâmica que serve pra alocar os dados no documento txt
FILE *file;
//definindo estrutura endereco
struct tp_endereco{
		char logradouro[30];
		int numero;
		char complemento[50];
		char cidade[30];
		char estado[5];
	};

struct tp_data_nascimento {
	int dia;
	int mes;
	int ano;
	
};


struct lista_clientes {
	char nome[50];
	char sobrenome[50];
	struct tp_endereco endereco;
	struct tp_data_nascimento dt_nascimento;
	int idade;
	char telefone[20];
	
}clientes[10];



//função principal
int main () {
	/* Configura a localidade para o ambiente padrão */
	setlocale(LC_ALL,"");
	
	system("cls");
	fflush(stdin);
	
		
 

	//FILE *file; abre o arquivo cliente.txt e escreve os dados lá.
	file = fopen("teste.txt","w");
	
	//verifica se o arquivo foi aberto ou não.
	if(file == NULL){
		printf("O ARQUIVO NÃO PODE SER ABERTO");
		getchar();
		exit(1);
	}
	else{
		printf("**********|      O ARQUIVO FOI ABERTO COM SUCESSO    |********** \n");
	}
	//declarando as estruturas
	
	void recebeCliente(struct lista_clientes lista[10]);
	void armazenaCliente(struct lista_clientes lista[10]);
	void imprimeCliente(struct lista_clientes lista[10]);
		
		printf("**********| ======================================== |********** \n");
		printf("**********| EXERCÍCIO 3 - TRABALHO ACADÊMICO         |********** \n");
		printf("**********| PROGRAMAÇÃO ESTRUTURADA - PROF ROGÉRIO   |********** \n");
		printf("**********| ======================================== |********** \n");
		printf("**********|TURMA:922 ALUNO:MATHEUS DE OLIVEIRA MACIEL|********** \n");
		printf("**********| MATRÍCULA: 2021200020 - UNICARIOCA MEIER |********** \n");
		printf("**********| ======================================== |********** \n\n");
		printf("**********| ======================================== |********** \n");
		printf("**********|      PROGRAMA CADASTRO DE CLIENTES       |********** \n");
		printf("**********| ======================================== |********** \n\n");
	
	recebeCliente(clientes);
	armazenaCliente(clientes);
	
	// função que fecha o documento
	fclose(file);
	
	imprimeCliente(clientes);
	
	

	getch();
	system("pause");
	return 0;
}


//Função que recebe as informações dos clientes
void recebeCliente (struct lista_clientes lista[10]) {
	
//limpando a memoria	
for(i=0; i<10; i++) {
     strcpy(lista[i].nome, "NULL");
     strcpy(lista[i].endereco.logradouro, "NULL");
     strcpy(lista[i].endereco.cidade, "NULL");
     strcpy(lista[i].endereco.estado, "NULL");
     lista[i].endereco.numero = 0;
     strcpy(lista[i].endereco.complemento, "NULL");
     lista[i].dt_nascimento.dia = 0;
     lista[i].dt_nascimento.mes = 0;
     lista[i].dt_nascimento.ano = 0;
     lista[i].idade = 0;
     strcpy(lista[i].telefone, "NULL");
    
}

	//com essa estrutura vou subtrair pela data de nascimento e gerar a idade automaticamente
 	struct tm *p;
    time_t dia_atual;

    time(&dia_atual);
    p = localtime(&dia_atual);
	
	
	for(i=0;i<10;i++){
		printf(" Digite o primeiro nome do(a) %dº cliente:\n ", i + 1);
	//	scanf("%s%*c",lista[i].nome); 
			gets(lista[i].nome);	
		printf(" Digite o sobrenome nome do(a) %s: \n ", lista[i].nome);
		//scanf("%s%*c",lista[i].sobrenome); 
			gets(lista[i].sobrenome);
		
		printf("\n -- Digite o endereço do(a) %s --\n\n ", lista[i].nome);
		printf("Digite o logradouro: \n "); 
			gets(lista[i].endereco.logradouro);
			
			printf(" Digite o número da residência (Digite 0 se não possuir):\n ");
			scanf("%d%*c",&lista[i].endereco.numero);
			
			printf(" Digite o complemento: \n "); 
			gets(lista[i].endereco.complemento);
			
			printf(" Digite a cidade:\n ");
		 	gets(lista[i].endereco.cidade);
			
			printf(" Digite a sigla do estado (ex: RJ):\n ");
		 	gets(lista[i].endereco.estado);
		
		printf("\n -- Digite a data de nascimento (dd/mm/aaaa) do(a) %s: --\n\n ", lista[i].nome);
		printf("Digite o dia: \n ",lista[i].nome);
		scanf("%d%*c",&lista[i].dt_nascimento.dia);
		
		printf(" Digite o mês: \n ");
		scanf("%d%*c",&lista[i].dt_nascimento.mes);
		
		printf(" Digite o ano: \n ",lista[i].nome);
		scanf("%d%*c",&lista[i].dt_nascimento.ano);
		 
		 //CALCULANDO A IDADE
		 idade = (365*(p->tm_year + 1900)) +
		 		 (30*(p->tm_mon + 1)) +
				 p->tm_mday -
				 (365*lista[i].dt_nascimento.ano)
				 - (30*lista[i].dt_nascimento.mes)
				 - lista[i].dt_nascimento.dia;
		 lista[i].idade = idade/365;
		printf(" A idade do(a) %s é: %d \n",lista[i].nome,lista[i].idade);
		 
		printf(" Digite o telefone do(a) %s: \n ", lista[i].nome);
		 
		gets(lista[i].telefone);
		printf("\n");
		
	}
	
};

//função que imprime os clientes na tela
void imprimeCliente (struct lista_clientes lista[10]	)
{
	printf("Nome completo do sexto cliente: %s %s \n",lista[5].nome,lista[5].sobrenome);	
	printf("Endereço do nono cliente: %s, %d, %s - %s \n",lista[8].endereco.logradouro,
											lista[8].endereco.numero,
											lista[8].endereco.cidade,
											lista[8].endereco.estado);
		
	printf("Idade do quarto cliente: %d \n",lista[3].idade);
	printf("Telefone do terceiro cliente: %s \n",lista[2].telefone);
	printf("\n\n");	
	};
		
			
//função que armazena os clientes no documento txt
void armazenaCliente (struct lista_clientes lista[10])
{
	//abre o arquivo no diretorio (cliente.txt)
	file = fopen("cliente.txt","w");

	if(file == NULL){
		printf("O ARQUIVO NÃO PODE SER SALVO");
		getchar();
		exit(1);
	}
	else{
		printf("O ARQUIVO FOI SALVO COM SUCESSO \n");
		printf("===== FIM DO PROGRAMA ========= \n");
	}
	
	//Pega os dados e insere no documento txt
		for(i=0;i<10;i++){
		fprintf(file,"(%dº cliente) Nome completo: %s %s, Endereço: %s, Nº: %d,Cidade: %s - %s, Data de Nascimento: %d/%d/%d (%d anos), telefone: %s \n\n",i + 1
													  ,lista[i].nome,
													  lista[i].sobrenome,
													  lista[i].endereco.logradouro,
													  lista[i].endereco.numero,
													  lista[i].endereco.cidade,
													  lista[i].endereco.estado,
													  lista[i].dt_nascimento.dia,
													  lista[i].dt_nascimento.mes,
													  lista[i].dt_nascimento.ano,
													  lista[i].idade,
													  lista[i].telefone);	

}
	// função que fecha o documento
	fclose(file);
};
