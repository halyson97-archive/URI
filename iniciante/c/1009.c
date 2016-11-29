#include <stdio.h>

void main()
{
	char nome[100];
	double salario, montante;
	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &montante);

	printf("TOTAL = R$ %.2f\n", salario + (montante*0.15));
	
}