#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	float peso_ideal, altura;
	
	printf("Digite a sua altura em cm: \n");
	scanf("%f", &altura);
	
	peso_ideal = (72*altura) - 58;

	printf("Seu peso ideal é de %.2f \n", peso_ideal);

	system("pause");	
	return 0;
}
