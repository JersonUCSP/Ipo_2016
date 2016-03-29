#include<stdio.h>
int main()
{
printf("\nEscribe tu texto");

int c;
int espacio= 0;
int tabulaciones = 0;
int salto_de_linea = 0;

printf("\nIntroduzca cadena, ( EOF para terminar )\n");

while( (c = getchar()) != EOF )
{            
if (' ' == c)
espacio+=1;
if ('\t' == c)
tabulaciones+=1;
if ('\n' == c)
salto_de_linea+=1;
}

printf("\nEspacios ------->: %d", espacio);
printf("\nTabulaciones --->: %d", tabulaciones);
printf("\nSalto de Linea ->: %d", salto_de_linea);
printf("\n\n");

}
