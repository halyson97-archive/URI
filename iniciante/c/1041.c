#include <stdio.h>

void main()
{
	float pontoX, pontoY;
	scanf("%f %f", &pontoX, &pontoY);



	if(pontoX == 0 && pontoY == 0){
		printf("Origem\n");
	} else if(pontoX == 0 && pontoY != 0){
		printf("Eixo Y\n");
	} else if(pontoY == 0 && pontoX != 0){
		printf("Eixo X\n");
	} else if(pontoX > 0 && pontoY > 0){
		printf("Q1\n");
	} else if(pontoX > 0 && pontoY < 0){
		printf("Q4\n");
	} else if(pontoX < 0 && pontoY > 0){
		printf("Q2\n");
	} else {
		printf("Q3\n");
	}
}