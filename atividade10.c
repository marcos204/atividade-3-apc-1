#include <stdio.h>
#define MAX 50

int main()
{
int num;
	int vet_bin[MAX];
	int i = 0, j;
  printf("escreva um numero decimal:\n");
scanf("%d",&num);
	int aux_num = num;
	while(num > 0)
	{
		
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}
	printf("%d em binario: ", aux_num);
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");

	return 0;
}