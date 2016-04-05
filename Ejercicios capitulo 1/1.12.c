#include<stdio.h>
main(){
	int c;
	printf(" Ejercicio 1.12 'Una palabra por linea' \n ");
	while ((c=getchar())!=EOF){
		if(c!=' ' && c!="\t" && c!="\n")
			putchar(c);
		else
			printf("\n");
	}
		
}
