#include <stdio.h>

void main(){
	float salario;
	int percentual = 0;

	scanf("%f", &salario);

	if (salario>=0 && salario<=400.00){
		percentual = 15;
	} else if (salario>400.00 && salario<=800.00){
		percentual = 12;
	} else if (salario>800.00 && salario<=1200.00){
		percentual = 10;
	} else if (salario>1200.00 && salario<=2000.00){
		percentual = 7;
	} else if(salario>2000.00){
		percentual = 4;
	}

	printf("Novo salario: %.2f\n",salario + (salario * percentual / 100));
	printf("Reajuste ganho: %.2f\n", salario * percentual / 100);
	printf("Em percentual: %d %%\n", percentual );
	
}