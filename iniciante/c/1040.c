#include <stdio.h>


void main()
{
	float n1, n2, n3, n4, media, exame;

	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);

	media = (n1*0.2) + (n2*0.3) + (n3*0.4) + (n4*0.1);

	printf("Media: %.1f\n", media);

	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	} else if (media < 5.0){
		printf("Aluno reprovado.\n");
	} else {
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media = (media + exame)/2;
		if(media >= 5.0){
			printf("Aluno aprovado.\n");
		} else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", media);
	}
}