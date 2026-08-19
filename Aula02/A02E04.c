#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float qntd_km, total;
	int dias;
	
	printf("Digite a quantidade de dias que o carro foi alugado: \n");
	scanf("%d", &dias);
	
	printf("Digite a quantidade de km percorridos com o carro: \n");
	scanf("%f", &qntd_km);
	
	total = (dias*60) + (qntd_km*0.15);
	
	printf("O total a ser pago é de: %2.f \n", total);
	
	system("pause");	
	return 0;
}
