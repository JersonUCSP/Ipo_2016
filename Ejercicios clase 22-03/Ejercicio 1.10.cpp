#include<stdio.h>
int main()
   
{                
printf("Escribe texto \n ");
 
int c;
int letra = 1;
while ( (c = getchar()) !=  EOF )
{   letra = 1;
	if ( '\t' == c){
		printf("\\t");
		letra = 0;
	}

	if ( '\b' == c){
		printf("\\b");
		letra = 0;
	}

	if ( '\\' == c){
		printf("\\");
		letra = 0;
	}

	if ( letra == 1 ){
		putchar(c);
	}

}
}     
