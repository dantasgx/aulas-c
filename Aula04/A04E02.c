#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, operacao, res;

	printf("Digite um número para n1: \n");
	scanf("%d", &n1);
	
	printf("Digite um número para n2: \n");
	scanf("%d", &n2);
	
	printf("Digite agora 0 para soma, 1 para subtração, 2 para multiplicação ou 3 para divisão. \n");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 0:
			res = n1 + n2;
			break;
		case 1:
			res = n1 - n2;
			break;
		case 2:
			res = n1 * n2;
			break;
		case 3:
			res = n1 / n2;
			break;
		default:
			printf("Número inválido! \n");
    }
	printf("O resultado é: %d \n", res);
	system("pause");	
	return 0;
}
