#include<stdio.h>
main(){
	int a;
	int cuad;
	scanf("%d",&a);
	while (a!=0){		
		cuad= a*a;
		printf("El cuadrado de %d  ", a);
		printf("es %d\n", cuad);
		scanf("%d",&a);
	}
	getch();
}
