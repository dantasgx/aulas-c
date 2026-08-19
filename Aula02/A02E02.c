#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dias, horas, minutos, segundos, totalseg;
	
	printf("Digite a quantidade de dias: \n");
	scanf("%d", &dias);
	
	printf("Digite a quantidade de horas: \n");
	scanf("%d", &horas);
	
	printf("Digite a quantidade de minutos: \n");
	scanf("%d", &minutos);
	
	printf("Digite a quantidade de segundos: \n");
	scanf("%d", &segundos);
	
	totalseg = (dias*24*60*60)+(horas*60*60)+(minutos*60) + segundos;
	
	printf("Segundos Totais: %d \n", totalseg);
	
	system("pause");	
	return 0;
}
