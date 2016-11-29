#include <stdio.h>

void main()
{

	float valor;
	

	scanf("%f", &valor);

	if(valor >= 0 && valor <=1000000.0){
		
		printf("NOTAS:\n");

		if(valor>=100.0){
			int notas = valor/100;
			printf("%d nota(s) de R$ 100.00\n", notas);

			valor = valor - (notas * 100);

		} else {
			printf("0 nota(s) de R$ 100.00\n");
		}
		if(valor >= 50.0){
			int notas = valor/50;
			printf("%d nota(s) de R$ 50.00\n", notas);

			valor = valor - (notas * 50);
			
		} else {
			printf("0 nota(s) de R$ 50.00\n");
		}
		if(valor >= 20.0){
			int notas = valor/20;
			printf("%d nota(s) de R$ 20.00\n", notas);

			valor = valor - (notas * 20);
			
		} else {
			printf("0 nota(s) de R$ 20.00\n");
		}
		if(valor >= 10.0){
			int notas = valor/10;
			printf("%d nota(s) de R$ 10.00\n", notas);

			valor = valor - (notas * 10);
			
		} else {
			printf("0 nota(s) de R$ 10.00\n");
		}
		if(valor >= 5.0){
			int notas = valor/5;
			printf("%d nota(s) de R$ 5.00\n", notas);

			valor = valor - (notas * 5);
			
		} else {
			printf("0 nota(s) de R$ 5.00\n");
		}
		if(valor >= 2.0){
			int notas = valor/2;
			printf("%d nota(s) de R$ 2.00\n", notas);

			valor = valor - (notas * 2);
			
		} else {
			printf("0 nota(s) de R$ 2.00\n");
		}
		printf("MOEDAS:\n");

		if(valor >= 1.0){
			int notas = valor/1;
			printf("%d moeda(s) de R$ 1.00\n", notas);

			valor = valor - (notas * 1);
			
		} else {
			printf("0 moeda(s) de R$ 1.00\n");
		}
		if(valor >= 0.50){
			int notas = valor/0.5;
			printf("%d moeda(s) de R$ 0.50\n", notas);

			valor = valor - (notas * 0.5);
			
		} else {
			printf("0 moeda(s) de R$ 0.50\n");
		}
		if(valor >= 0.25){
			int notas = valor/0.25;
			printf("%d moeda(s) de R$ 0.25\n", notas);

			valor = valor - (notas * 0.25);
			
		} else {
			printf("0 moeda(s) de R$ 0.25\n");
		}
		if(valor >= 0.10){
			int notas = valor/0.1;
			printf("%d moeda(s) de R$ 0.10\n", notas);

			valor = valor - (notas * 0.1);
			
		} else {
			printf("0 moeda(s) de R$ 0.10\n");
		}
		if(valor >= 0.05){
			int notas = valor/0.05;
			printf("%d moeda(s) de R$ 0.05\n", notas);

			valor = valor - (notas * 0.05);
			
		} else {
			printf("0 moeda(s) de R$ 0.05\n");
		}
		if(valor > 0){
			
			float moedas = valor/0.01;
			printf("%.0f moeda(s) de R$ 0.01\n", moedas);

			valor = 0;
			
		} else {
			printf("0 moeda(s) de R$ 0.01\n");
		}

		
		
	}
}