#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>
void main()
{
	/* Set the locale to the environment default */
setlocale (LC_ALL, "");

   inicio: 
   system("cls");
   fflush(stdin);
   int cnpj_vetor[14], numeros[14], n,m,i,erro;
   int parte1,parte2,parte3,dig1;
   int parte5,parte6,parte7,dig2,opc;
   int resp,resto1,resto2;
  
     printf("\n*== Desenvolvido por: Matheus de Oliveira Maciel ===============*\n");
	printf("*=====================================================================*\n");
    printf("*===== Unicarioca 2022 - Programação Estruturada =========*\n");
	printf("*==================== Professor Rogério Malheiros ==============================================*\n");
   printf("*==================================================================*\n\n\n");
   printf("|       O que voce deseja fazer?         |\n");
   printf("*----------------------------------------*\n");
   printf("| 1 - Descobrir os digitos verificadores |\n");
   printf("| 2 - Verificar a validade de um CNPJ    |\n");
   printf("| 3 - Finaliza o programa                |\n");
   printf("*========================================*\n");
   erro=0;
   
   //Validar se o usuario digitou um valor fora do intervalo 1, 2, 3;
   do
   {
      erro++;
      if(erro>1)
      {
         printf("Erro: Opcao invalida!\n");
         erro=1;
      }
      printf("Informe a sua opcao: ");
      scanf("%d",&opc); fflush(stdin);
      printf("*==================================================================*\n");
   }while(opc>3 || opc<1);
   
   
   switch(opc)
   {
      case 1:
      {
         //*==========================================*
         //|       Leitura dos numeros do CNPJ        |
         //*==========================================*
         printf("Digite os 12 primeiros do CNPJ: ",i);
         for(i=0;i<=11;i++)
         {
         	
            if(i-1==1)printf(".");
            if(i-1==4)printf(".");
            if(i-1==7)printf("/");
            numeros[i]=getche();      //armazeno no vetor numeros
            cnpj_vetor[i]=numeros[i]; //Passo para o cnpj_vetor
         }
         break;
      }
      case 2:
      {
         printf("Digite os 14 numeros do CNPJ: ",i);
         for(i=0;i<=13;i++)
         {
            if(i==2)printf(".");
            if(i==5)printf(".");
            if(i==8)printf("/");
            if(i==12)printf("-");
            numeros[i]=getche();
            cnpj_vetor[i]=numeros[i];
         }
         break;
      }
      case 3:
      {
         printf("Deseja continuar no programa (s/n)? ");
         scanf("%s",&resp);
         if((resp=='n') || (resp=='N')) goto fim; //termina o programa
         else goto inicio; //volta para o inicio do programa
      }
   }
   //*=========================================*
   //|       Primeiro digito verificador       |
   //*=========================================*
   n = ((((cnpj_vetor[0] - '0') * 5 ) +
         ((cnpj_vetor[1] - '0') * 4 ) +
         ((cnpj_vetor[2] - '0') * 3 ) +
         ((cnpj_vetor[3] - '0') * 2 ) +
         ((cnpj_vetor[4] - '0') * 9 ) +
         ((cnpj_vetor[5] - '0') * 8 ) +
         ((cnpj_vetor[6] - '0') * 7 ) +
         ((cnpj_vetor[7] - '0') * 6 ) +
         ((cnpj_vetor[8] - '0') * 5 ) +
         ((cnpj_vetor[9] - '0') * 4 ) +
         ((cnpj_vetor[10] - '0') * 3 ) +
         ((cnpj_vetor[11] - '0') * 2 )) % 11);
         
         //printf("N e o resto da divisão por 11 %d \n", n);
   
   if(n < 2) {
   	dig1=0;
   	numeros[12]=dig1;
   	//printf("O valor do dig1 e %d \n", dig1);
   }
   else {
   	dig1 = (11 - n);
   	numeros[12]=dig1;
   	//printf("O valor do dig1 e %d \n", dig1);
   } 
  
  
   if(dig1>9){
   dig1=0;
   numeros[12]=dig1;
   }
   if(opc==1)
   {
      printf("\n*===================================================================*\n");
      printf("Primeiro digito: %d\n",dig1);
   }
   else
   printf("\n*===================================================================*\n");
   //*=========================================*
   //|       Segundo digito verificador        |
   //*=========================================*
   m =((((cnpj_vetor[0] - '0') * 6 ) +
         ((cnpj_vetor[1] - '0') * 5 ) +
         ((cnpj_vetor[2] - '0') * 4 ) +
         ((cnpj_vetor[3] - '0') * 3 ) +
         ((cnpj_vetor[4] - '0') * 2 ) +
         ((cnpj_vetor[5] - '0') * 9 ) +
         ((cnpj_vetor[6] - '0') * 8 ) +
         ((cnpj_vetor[7] - '0') * 7 ) +
         ((cnpj_vetor[8] - '0') * 6 ) +
         ((cnpj_vetor[9] - '0') * 5 ) +
         ((cnpj_vetor[10] - '0') * 4 ) +
         ((cnpj_vetor[11] - '0') * 3 ) + 
		 (dig1 * 2)) % 11);
		 
		 
		 	
	//printf("M e resto da divisao por 11: %d\n",m);
         
   if (m < 2) {
   	dig2 = 0;
   	numeros[13]=dig2;
   }
   else  {
   	dig2 = (11 - m);
   	numeros[13]=dig2;
   }
   
  
   if(opc==1)
   {
      printf("Segundo digito.: %d\n",dig2);
      printf("*==================================================================*\n");
   }
   //*==========================================*
   //|       Impressao do cnpj completo       | 
   //*==========================================*
   //printf("valor de n = %d \n\n",n);
   
   printf("Numero completo do CNPJ:\n");
   
   for(i=0;i<=11;i++)   
   {
   	  //numeros[i] = cnpj_vetor[i];
      printf("%d",cnpj_vetor[i] - '0');//numeros do CNPJ
      if(i==1)printf(".");
      if(i==4)printf(".");
      if(i==7)printf("/");
   }
   
   //if(opc==1)
   printf("-%d%d\n",dig1,dig2); //dois últimos digitos
   
   
   if(opc==2)
   {
   	  
   	  n = ((((cnpj_vetor[0] - '0') * 5 ) +
            ((cnpj_vetor[1] - '0') * 4 ) +
            ((cnpj_vetor[2] - '0') * 3 ) +
            ((cnpj_vetor[3] - '0') * 2 ) +
            ((cnpj_vetor[4] - '0') * 9 ) +
            ((cnpj_vetor[5] - '0') * 8 ) +
            ((cnpj_vetor[6] - '0') * 7 ) +
            ((cnpj_vetor[7] - '0') * 6 ) +
            ((cnpj_vetor[8] - '0') * 5 ) +
            ((cnpj_vetor[9] - '0') * 4 ) +
            ((cnpj_vetor[10] - '0') * 3 ) +
            ((cnpj_vetor[11] - '0') * 2 )) % 11);
         
         //printf("N e o resto da divisão por 11 %d \n", n);
   
   if(n < 2) {
   	dig1=0;
   	//numeros[12]=dig1;
   	//printf("O valor do dig1 e %d \n", dig1);
   }
   else {
   	dig1 = (11 - n);
   	//numeros[12]=dig1;
   	//printf("O valor do dig1 e %d \n", dig1);
   } 
  
   	  
   	m =((((cnpj_vetor[0] - '0') * 6 ) +
         ((cnpj_vetor[1] - '0') * 5 ) +
         ((cnpj_vetor[2] - '0') * 4 ) +
         ((cnpj_vetor[3] - '0') * 3 ) +
         ((cnpj_vetor[4] - '0') * 2 ) +
         ((cnpj_vetor[5] - '0') * 9 ) +
         ((cnpj_vetor[6] - '0') * 8 ) +
         ((cnpj_vetor[7] - '0') * 7 ) +
         ((cnpj_vetor[8] - '0') * 6 ) +
         ((cnpj_vetor[9] - '0') * 5 ) +
         ((cnpj_vetor[10] - '0') * 4 ) +
         ((cnpj_vetor[11] - '0') * 3 ) + 
		 (dig1 * 2)) % 11);
		 
		 
		 	
	//printf("M e resto da divisao por 11: %d\n",m);
         
   if (m < 2) {
   	dig2 = 0;
   	//numeros[13]=dig2;
   }
   else  {
   	dig2 = (11 - m);
   	//numeros[13]=dig2;
   }
   
      	  
    if(cnpj_vetor[12]-'0'==dig1 && cnpj_vetor[13]-'0'==dig2)
      {
         //printf("-%d%d\n",numeros[12]- '0',numeros[13]- '0'); //dois últimos digitos   
         printf("CNPJ valido\n");
      }
      else
      {
         //printf("-%d%d\n",numeros[12]- '0',numeros[13]- '0'); //dois últimos digitos
         printf("CNPJ invalido\n");
      }
      
   printf("Numero completo do CNPJ:\n");
   
   
   for(i=0;i<=11;i++)   
   {
   	  //numeros[i] = cnpj_vetor[i];
      printf("%d",cnpj_vetor[i] - '0');//numeros do CNPJ
      if(i==1)printf(".");
      if(i==4)printf(".");
      if(i==7)printf("/");
   }
   
   //if(opc==1)
   printf("-%d%d\n",dig1,dig2); //dois últimos digitos
   }
   
  
   printf("*==================================================================*\n");
   printf("Pressione \"enter\" para continuar...");
   getchar();
   goto inicio; //volta no inicio do programa
   fim:;
}

