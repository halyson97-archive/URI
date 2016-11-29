#include <stdio.h>

void main(){
	int n1, n2, n3, ordem[3];
	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 < n2 && n1 < n3){
		ordem[0] = n1;
		if (n2 < n3)
		{
			ordem[1] = n2;
			ordem[2] = n3;
		} else {
			ordem[1] = n3;
			ordem[2] = n2;
		}
	} else if(n2 < n1 && n2 < n3){
		ordem[0] = n2;
		if (n1<n3)
		{
			ordem[1] = n1;
			ordem[2] = n3;
		} else{
			ordem[1] = n3;
			ordem[2] = n1;
		}
	} else{
		ordem[0] = n3;
		if (n1<n2)
		{
			ordem[1] = n1;
			ordem[2] = n2;
		} else{
			ordem[1] = n2;
			ordem[2] = n1;
		}
	}
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", ordem[i]);
	}

	printf("\n%d\n%d\n%d\n", n1, n2, n3);
}