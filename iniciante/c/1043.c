#include <stdio.h>

void main(){
	float n1, n2, n3;
	scanf("%f %f %f", &n1, &n2, &n3);

	if((n1+n2)>n3 && (n1+n3) > n2 && (n2+n3) > n1){
		printf("Perimetro = %.1f\n", n1+n2+n3);
	} else{
		printf("Area = %.1f\n", n3*(n1 + n2)/2);
	}
}