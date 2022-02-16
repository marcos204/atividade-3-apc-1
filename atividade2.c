#include <stdlib.h>
#include <stdio.h>
int main (void)
{
float valor_bruto,desconto;
printf("digite o valor: ");
scanf("%f",&valor_bruto);

if(valor_bruto<=100)
{ 
  desconto=valor_bruto*0.01;
printf("valor do desconto %.2f",desconto);
}
if(valor_bruto>=100.01<= 500)
{ 
  desconto=valor_bruto*0.05;
printf("valor do desconto %.2f",desconto);
}
if(valor_bruto > 500)
{ 
  desconto=valor_bruto*0.1;
printf("valor do desconto %.2f",desconto);
}


 }