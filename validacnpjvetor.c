#include <stdio.h>
#include <locale.h>
int main()
{
/* Set the locale to the environment default */
setlocale (LC_ALL, "");
//Declaração das variáveis
int verif1;
int verif2;
int i;int cnpj_vetor[14];
int calc_cnpj[12]= {5,4,3,2,9,8,7,6,5,4,3,2};
int calc_cnpj2[13]={6,5,4,3,2,9,8,7,6,5,4,3,2};
int result_calc[13];
int soma=0;
//Solicitação do número do CNPJ
for(i=0;i<12;i+=1)
{
printf("Digite seu CNPJ dígito à dígito:");
scanf("%d",&cnpj_vetor[i]);
}
//-CALCULO PRIMEIRO DÍGITO VERIFICADOR
//Multiplicação dos valores
for(i=0;i<12;i+=1)
{
result_calc[i]=cnpj_vetor[i] * calc_cnpj[i];
}
//Soma dos valores
for(i=0;i<12;i+=1)
{
soma=soma+result_calc[i];
}
//Calculo do resto da divisão da soma por 11
verif1=soma%11;
//Verificação se é maior que 2
if(verif1<2)verif1 = 0;
else
verif1 = 11 - verif1;
//Adicionando o novo valor obtido ao número do CNPJ
cnpj_vetor[12]=verif1;
//-CALCULO SEGUNDO DÍGITO VERIFICADOR
//Multiplicação dos valores
for(i=0;i<13;i+=1)
{
result_calc[i]=cnpj_vetor[i]*calc_cnpj2[i];
}
//Soma dos valores
soma=0;
for(i=0;i<13;i+=1)
{
soma=soma+result_calc[i];
}
//Calculo do resto da divisão da soma por 11
verif2=soma%11;
//Verificação se é maior que 2
if(verif2<2)
verif2 = 0;
else
verif2 = 11 - verif2;
cnpj_vetor[13]=verif2;
//Adicionando o novo valor obtido ao número do CNPJcnpj_vetor[13]=verif2;
//Impressão dos resultados
printf("\nO primeiro dígito verificador para este CNPJ é %d\n",cnpj_vetor[12]);
printf("O segundo dígito verificador para este CNPJ é %d\n",cnpj_vetor[13]);
printf("\nLogo o CNPJ completo é ");
for(i=0;i<14;i+=1)
{
printf("%d",cnpj_vetor[i]);
}
}
