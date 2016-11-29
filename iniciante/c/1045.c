#include <stdio.h>

void insertionSortC(float array[], int tamanho) {
      int i, j;
      float tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

void main(){
	float ordem[3];

	scanf("%f %f %f", &ordem[0], &ordem[1], &ordem[2]);

	insertionSortC(ordem,3);
	
		

		if(ordem[2]>=ordem[1]+ordem[0]){
			printf("NAO FORMA TRIANGULO\n");
		} else{
			if(ordem[2]*ordem[2]==ordem[1]*ordem[1] + ordem[0]*ordem[0]){
				printf("TRIANGULO RETANGULO\n");
			}
			if(ordem[2]*ordem[2] > ordem[1]*ordem[1] + ordem[0]*ordem[0]){
				printf("TRIANGULO OBTUSANGULO\n");
			}
			if(ordem[2]*ordem[2]<ordem[1]*ordem[1] + ordem[0]*ordem[0]){
				printf("TRIANGULO ACUTANGULO\n");
			}
			if(ordem[2] == ordem[1] && ordem[1] == ordem[0]){
				printf("TRIANGULO EQUILATERO\n");
			}
			if((ordem[0] == ordem[1] && ordem[1] != ordem[2]) || (ordem[0] == ordem[2] && ordem[1] != ordem[2]) || (ordem[2] == ordem[1] && ordem[1] != ordem[0])){
				printf("TRIANGULO ISOSCELES\n");
			}
		}
	

}