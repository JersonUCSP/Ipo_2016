#include<stdio.h>
#define tamanho 50
main(){
	int a, i, j;
	int cantidad=1;
	int caracter[tamanho + 1 ] = { 0, 0 };
	printf("Histograma  \n");
	while ((a=getchar())!= EOF){
		if(a == ' ' || a== '\n' || a == '\t')
			cantidad++;
		else 
			caracter[cantidad]++;
	}
	printf("\n\n");
	
	for (i=1; i<= cantidad; i++){
		for (j=1; j<=caracter[i];j++){
			printf("*");}
		printf("\n");
	}  
	
	printf("\n");            
                              
}               
               

