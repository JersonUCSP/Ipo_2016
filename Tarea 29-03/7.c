#include<stdio.h>
main(){
	int a,b=1,i;
	printf("Factorial de un numero : ");
	scanf("%d",&a);
	for (i=1; i<=a;i++)
		b=b*i;
	printf("La respuesta es %d ", b);
}
