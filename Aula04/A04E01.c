#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
		float distancia, preco;
	printf("Escreva a distancia que deseja percorrer (em km) \n");
	scanf("%f", &distancia);

	if (distancia < 200){
		preco = distancia * 0.50;
    }
    else {
		preco = distancia * 0.45;
	}
	
	printf("O valor total a ser pago é de %.2f \n", preco);
	system("pause");	
	return 0;
}
