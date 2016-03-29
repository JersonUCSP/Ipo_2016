#include<stdio.h>
main(){
	int x,n,num=1,i;
	printf("El valor de la base es \n ");
	scanf(" %d ", &x);
	printf("El valor del exponente es \n ");
	scanf(" %d ", &n);
	for(i=1;i<=n;i++)
		num=num*x;
	printf("%d", num); 
}
