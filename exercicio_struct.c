/* CRIE UM PROGRAMA QUE POSSUI UMA FUN��O QUE RECEBE COMO ARGUMENTO UM VETOR DE TAMANHO 5
DE TIPO ESTRUTURA SENDO QUE ESSA ESTRUTURA DEVE ARMAZENAR UM DETERMINADO HOR�RIO NO FORMATO
HH:MM:SS

PE�A QUE O USU�RIO DIGITE 5 HOR�RIOS DIVERSOS QUE DEVERS�O SER ARMAZENADOS NO ARGUMENTO RECEBIDO

CRIE UMA SEGUNDA FUN��O QUE RECEBER� ESTE MESMO VETOR ESTRUTURA MAS DESSA VEZ A FUN��O DEVER�
APENAS LER OS VALORES ARMAZENADOS AO VETOR ESTRTUTURA, MOSTRANDO UMA MENSAGEM APROPRIADA. */




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//vari�vel contadora para estrutura for
int i;

//primeiro passo � criar a estrutura (definir)
struct horario {
	int hora;
	int min;
	int seg;
};



int main (void) {
	setlocale(LC_ALL,"");
	
	//declarando as fun��es com a estrutura como parametro para a fun��o main
	void recebeHorario(struct horario list[5]);
	void printHorario(struct horario list[5]);
	
	//declarando a estrutura como vetor de 5 posi��es conforme foi solicitado no enunciado	
	struct horario listaHorario[5];
	
	//trazendo a fun��o propriamente dita para printar na tela seu retorno.
	recebeHorario(listaHorario);
	printHorario(listaHorario);
		
		
		
system("pause");
	return 0;
};

// a fun��o recebe hor�rio, tem uma estrutura declarada nela como parametro, um array de 5 posi��es
void recebeHorario ( struct horario list[5]){
	
	//o la�o for ir� receber os valores digitados pelo usu�rio
	for(i=0;i<5;i++){
		printf("Digite o %d horario (hh:mm:ss): \n ", i + 1);
		 
			 
		scanf("%d:%d:%d",&list[i].hora
						,&list[i].min
						,&list[i].seg);
		printf("\n");
		
	}
	
}
	
	
// a fun��o ir� printar na tela o valor recebido pelo pelo usu�rio na fun��o recebeHorario, esse valor vir� por meio da estrutura horario list[5], os valores
// ir�o ser armazenado no vetor list[5] de 5 posi��es.
void printHorario (struct horario list[5]) {
	for(i=0;i<5;i++){
		printf("O %d hor�rio �: %d:%d:%d",i + 1,
						list[i].hora
						,list[i].min
						,list[i].seg);
		printf("\n");
		
	}
	
}




