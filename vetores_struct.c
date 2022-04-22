//VETORES EM ESTRUTURAS

#include <stdio.h>
#include <locale.h>
struct horario {
	int hora;
	int min;
	int seg;
}teste2[3] = {{10,20,30},
			{40,50,60},
			{70,80,90}};



int main () {
	setlocale(LC_ALL,"");
	
//sintaxe -> struct horario teste[10][j];

	struct horario teste[5] = {teste[0].hora = 10
	};
	teste[0].min = 20;
	teste[0].seg = 40;
	teste[1].min = 30;
	teste[2].seg = 15;
	
	int i=0;
	
	for(i=0;i<3;i++){
		printf("%d:%d:%d\n\n",teste2[i].hora,teste2[i].min,teste2[i].seg);

	}
	
	
printf("\n%d:%d:%d\n",teste[0].hora,teste[1].min,teste[2].seg);
printf("%d:%d:%d\n",teste[0].hora,teste[0].min,teste[0].seg);

	system("pause");
	return 0;
}
