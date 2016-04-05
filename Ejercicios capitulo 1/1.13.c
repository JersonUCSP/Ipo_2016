#include<stdio.h>
#define tamanho 100
main(){
	int c, palabras=1 , a, b;
	int lista[tamanho]={0,0};
	printf(" 1.13 Histograma \n ");
	while ((c=getchar())!=EOF){
		if (c==' ' || c=='\t' || c=='\n')
			palabras++;
		else
			lista[palabras]++;
	}

	for (a=1; a<=palabras; a++){
		for (b=1; b<=lista[a]; b++){
			printf("*");}
		printf("\n");
	}
		
}
