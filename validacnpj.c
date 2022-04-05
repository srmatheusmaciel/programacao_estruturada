#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>
void main()
{
   inicio: 
   system("cls");
   fflush(stdin);
   int cnpj_vetor[14],n,m,i,erro;
   int parte1,parte2,parte3,dig1;
   int parte5,parte6,parte7,dig2,opc;
   int resp,resto1,resto2;
   char numeros[14];
   printf("*==================================================================*\n");
   printf("|       O que voce deseja fazer?         |\n");
   printf("*----------------------------------------*\n");
   printf("| 1 - Descobrir os digitos verificadores |\n");
   printf("| 2 - Verificar a validade de um CNPJ    |\n");
   printf("| 3 - Finaliza o programa                |\n");
   printf("*========================================*\n");
   erro=0;
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
            numeros[i]=getche();
            cnpj_vetor[i]=(numeros[i] - '0');
            //cnpj_vetor[i]= numeros[i];
            //numeros[i]=' '; 
         }
         break;
      }
      case 2:
      {
         printf("Digite os 14 numeros do CNPJ: ",i);
         for(i=0;i<=14;i++)
         {
            if(i-1==2)printf(".");
            if(i-1==5)printf(".");
            if(i-1==8)printf("/");
            if(i-1==12)printf("-");
           numeros[i]=getche();
         cnpj_vetor[i]=(numeros[i] - '0');
            //numeros[i]=' ';
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
   n =((((cnpj_vetor[0] - '0') * 5 ) +
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
         ((cnpj_vetor[11] - '0') * 2 ) % 11 ));
   //parte1= (n / 11);
   //resto1= n % 11;
   if(n < 2) {
   	dig1=0;
   }
   else {
   	dig1 = (11 - n);
   } 
  /* parte2=(parte1 * 11);
   parte3=(n - parte2);
   dig1=(11 - parte3); */
   if(dig1>9)dig1=0;
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
   m =((cnpj_vetor[0]*6)+
         (cnpj_vetor[1]*5)+
         (cnpj_vetor[2]*4)+
         (cnpj_vetor[3]*3)+
         (cnpj_vetor[4]*2)+
         (cnpj_vetor[5]*9)+
         (cnpj_vetor[6]*8)+
         (cnpj_vetor[7]*7)+
         (cnpj_vetor[8]*6)+
         (cnpj_vetor[9]*5)+
         (cnpj_vetor[10]*4)+
         (cnpj_vetor[11]*3)+
         (dig1*2));
   parte5= (m / 11);
   resto2 = (m % 11);
   if (resto2 < 2)dig2=0;
   else dig2 = (11 - resto2);
   /*parte6= parte5 * 11;
   parte7= m - parte6;
  */
  
   //if(dig2>9)dig2=0;
   if(opc==1)
   {
      printf("Segundo digito.: %d\n",dig2);
      printf("*==================================================================*\n");
   }
   //*==========================================*
   //|       Impressao do cnpj completo       | 
   //*==========================================*
   printf("Numero completo do CNPJ:\n");
   for(i=0;i<=11;i++)
   {
      printf("%d",cnpj_vetor[i]);//numeros do CNPJ
      if(i==1)printf(".");
      if(i==4)printf(".");
      if(i==7)printf("/");
   }
   
   if(opc==1)
   printf("-%d%d\n",dig1,dig2); //dois últimos digitos
   
   if(opc==2)
   {
      if(cnpj_vetor[13]==dig1 && cnpj_vetor[14]==dig2)
      {
         printf("-%d%d\n",cnpj_vetor[13],cnpj_vetor[14]); //dois últimos digitos
         printf("CNPJ valido\n");
      }
      else
      {
         printf("-%d%d\n",cnpj_vetor[13],cnpj_vetor[14]); //dois últimos digitos
         printf("CNPJ invalido\n");
      }
   }
   printf("*==================================================================*\n");
   printf("Pressione \"enter\" para continuar...");
   getchar();
   goto inicio; //volta no inicio do programa
   fim:;
}

