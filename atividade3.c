#include <stdlib.h>
#include <stdio.h>
int main (void)
{
int valor_satisfacao;
printf("qual o valor da sua satisfação?\n");
printf("sendo 1 = Ruim, 2 = Insuficiente, 3 = Suficiente, 4 = Bom, 5 = Ótimo \n");
scanf("%d",&valor_satisfacao);

if(valor_satisfacao==1){ 
printf("ruim");
}
if(valor_satisfacao==2){ 
printf("insuficiente");
}
if(valor_satisfacao==3){ 
printf("suficiente");
}
if(valor_satisfacao==4){ 
printf("bom");
}
if(valor_satisfacao==5){ 
printf("ótimo");
}
else{
printf("Nota inválida");
}

 }