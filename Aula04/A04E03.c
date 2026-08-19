#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int tipo;
	float valor;
	printf("Digite o valor da compra: \n");
	scanf("%f", &valor);
	printf("Digite (1) para cliente comum e (2) para funcionario: \n");
	scanf("%d", &tipo);
	if(tipo == 1 && valor > 1000){
		valor = valor * 0.97;
    } else if(tipo == 2){
		valor = valor * 0.95;
    }
    printf("O total é R$ %.2f \n", valor);
	system("pause");	
	return 0;
}
