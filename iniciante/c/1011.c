#include <stdio.h>
#include <math.h>

void main()
{

	double raio, pi;
	pi = 3.14159;

	scanf("%lf", &raio);
	

	printf("VOLUME = %.3f\n", 4.0/3 * pow(raio, 3) * pi);
}