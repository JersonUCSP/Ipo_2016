#include<stdio.h>
main(){
	int a,b,c;
	printf("Valor de a: ");
	scanf("%d", &a);
	printf("Valor de b: ");
	scanf("%d", &b);
	printf("Valor de c: ");
	scanf("%d", &c);
	
	if (a<b){
		if(b<c)
		printf("%d %d %d",a,b,c );
		else
		printf("%d %d %d", a,c,b);
	}
	else if (b<a){
		if(a<c)
		printf("%d %d %d",b,a,c );
		else
		printf("%d %d %d",b,c,a );
	}
	else if (c<a){
		if(a<b)
		printf("%d %d %d",c,a,b );
		else
		printf("%d %d %d",c,b,a );
	}
}
