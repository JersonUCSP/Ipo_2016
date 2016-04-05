#include <stdio.h>                 
#define Tamanho 256                  
main()                 
{       
printf("Frecuencia de letras \n ");    
int caracteres[Tamanho]={0,0};                     
int c,i,j;               
                  
while (( c = getchar()) != EOF ){     
caracteres[c]++;  
}         
	for ( i = 0; i <= Tamanho; i++)
	{                  
		if (caracteres[i] != 0 )
		{
			putchar(i);
			for ( j = 1; j <=caracteres[i]; j++)          
				printf(" *");
				printf("\n");                 
		}
	   
	}

}
                  
               
