#include <stdio.h>

void main(){
	int horaInicio, minInicio, horaTermino, minTermino;

	scanf("%d %d %d %d", &horaInicio, &minInicio, &horaTermino, &minTermino);

	if(horaInicio <=24 && horaTermino <=24 && minInicio<=60 && minTermino<=60){

		if(horaInicio == horaTermino){
			if(minInicio == minTermino){
				printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");	
			} else if(minInicio<minTermino){
				printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", minTermino - minInicio);	
			} else{
				printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", (minTermino+60) - minInicio);	
			}

		} else if (horaTermino > horaInicio){
			if(minInicio == minTermino){
				printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", horaTermino - horaInicio);	
			} else if(minInicio<minTermino){
				printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTermino - horaInicio, minTermino - minInicio);	
			} else{
				printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTermino - horaInicio -1, (minTermino+60) - minInicio);	
			}
		} else {
			if(minInicio == minTermino){
				printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", horaTermino + 24 - horaInicio);	
			} else if(minInicio<minTermino){
				printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTermino + 24 - horaInicio, minTermino - minInicio);	
			} else{
				printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTermino + 23 - horaInicio, (minTermino+60) - minInicio);	
			}
		}
	}
}