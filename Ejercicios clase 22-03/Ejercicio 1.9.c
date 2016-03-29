#include<stdio.h>
main()
{ 
printf("ESCRIBE TU TEXTO \n");

int anterior;
int c;

while ( (c = getchar()) != EOF ) {        
	if (' ' != c && '\t' != c){
		putchar(c);
	    anterior = 'a'; 
	}       

	if ( ' ' == c || '\t' == c ){
		if ( 'a' == anterior ){
			printf(" ");
			anterior = 'b'; 
		}
	}      
}                

}              
