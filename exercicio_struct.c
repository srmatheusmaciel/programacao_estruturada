/* CRIE UM PROGRAMA QUE POSSUI UMA FUNÇÃO QUE RECEBE COMO ARGUMENTO UM VETOR DE TAMANHO 5
DE TIPO ESTRUTURA SENDO QUE ESSA ESTRUTURA DEVE ARMAZENAR UM DETERMINADO HORÁRIO NO FORMATO
HH:MM:SS

PEÇA QUE O USUÁRIO DIGITE 5 HORÁRIOS DIVERSOS QUE DEVERSÃO SER ARMAZENADOS NO ARGUMENTO RECEBIDO

CRIE UMA SEGUNDA FUNÇÃO QUE RECEBERÁ ESTE MESMO VETOR ESTRUTURA MAS DESSA VEZ A FUNÇÃO DEVERÁ
APENAS LER OS VALORES ARMAZENADOS AO VETOR ESTRTUTURA, MOSTRANDO UMA MENSAGEM APROPRIADA. */




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//variável contadora para estrutura for
int i;

//primeiro passo é criar a estrutura (definir)
struct horario {
	int hora;
	int min;
	int seg;
};



int main (void) {
	setlocale(LC_ALL,"");
	
	//declarando as funções com a estrutura como parametro para a função main
	void recebeHorario(struct horario list[5]);
	void printHorario(struct horario list[5]);
	
	//declarando a estrutura como vetor de 5 posições conforme foi solicitado no enunciado	
	struct horario listaHorario[5];
	
	//trazendo a função propriamente dita para printar na tela seu retorno.
	recebeHorario(listaHorario);
	printHorario(listaHorario);
		
		
		
system("pause");
	return 0;
};

// a função recebe horário, tem uma estrutura declarada nela como parametro, um array de 5 posições
void recebeHorario ( struct horario list[5]){
	
	//o laço for irá receber os valores digitados pelo usuário
	for(i=0;i<5;i++){
		printf("Digite o %d horario (hh:mm:ss): \n ", i + 1);
		 
			 
		scanf("%d:%d:%d",&list[i].hora
						,&list[i].min
						,&list[i].seg);
		printf("\n");
		
	}
	
}
	
	
// a função irá printar na tela o valor recebido pelo pelo usuário na função recebeHorario, esse valor virá por meio da estrutura horario list[5], os valores
// irão ser armazenado no vetor list[5] de 5 posições.
void printHorario (struct horario list[5]) {
	for(i=0;i<5;i++){
		printf("O %d horário é: %d:%d:%d",i + 1,
						list[i].hora
						,list[i].min
						,list[i].seg);
		printf("\n");
		
	}
	
}




