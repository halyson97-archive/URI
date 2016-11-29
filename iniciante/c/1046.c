#include <stdio.h>

void main(){
	int inicio, termino;

	scanf("%d %d", &inicio, &termino);

	if(inicio == termino){
		printf("O JOGO DUROU 24 HORA(S)\n");
	} else if (termino > inicio){
		printf("O JOGO DUROU %d HORA(S)\n", termino -inicio);
	} else {
		printf("O JOGO DUROU %d HORA(S)\n", (termino+24) - inicio);
	}
}