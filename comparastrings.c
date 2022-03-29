/************************ COMPARANDO STRINGS ******************************/
#include<stdlib.h>
#include <stdio.h>
#include <locale.h>
#include<conio.h>
#include <string.h>


int main () {
	char x[100];
	char y[100];
	int z,i;
	/* Set the locale to the environment default */
setlocale (LC_ALL, "");
	printf("============== COMPARE AS 5 PRIMEIRAS PALAVRAS ============ \n\n");
	printf("*=============*****  Dê duas palavras  *****========================*\n\n");
	printf("| Digite a primeira palavra |\n\n");
	scanf(" %[^\n]",x);
	printf("| Primeira palavra: %s |\n\n",x);
	
	printf("| Digite a segunda palavra | \n");
	scanf(" %[^\n]",y);
	printf("| Segunda palavra: %s | \n\n ",y);
	z = strncmp(x,y,5);
	i = strcmp(x,y); 
	
	if( i == 0) {
	printf("\n\n As palavras são iguais \n");
//	printf ("Concatenando fica %s \n\n ",strcat(x,y));

  }
else {
	printf("\n\n As palavras são diferentes \n");
}
   
	
if( z == 0) {

	printf("\n Os 5 primeiros caracteres destas palavras são iguais entre si \n");
	printf ("Concatenando fica %s \n\n ",strcat(x,y));
	
	 printf("*==================================================================*\n");
	 exit(EXIT_SUCCESS);
   
   
}
else {

printf("\n Pelo menos um dos 5 primeiros caracteres é diferente entre estas strings \n");
printf ("Concatenando fica %s \n\n ",strcat(x,y));
printf("*========================= FIM =========================================*\n");
exit(EXIT_SUCCESS);

}
	
	
}
