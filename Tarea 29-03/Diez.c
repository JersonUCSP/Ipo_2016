#include<stdio.h>
main(){
	float n, i;
	float suma=0;
	scanf("%f", &n);
	for(i=1; i<=n;i++)
		suma = suma + 1/i;
	printf("%f",suma);
	
	
	
}
