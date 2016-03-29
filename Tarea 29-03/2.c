#include <stdio.h>
int main()
{
printf("Escriba su texto");
int c;
int espacios= 0;
int tabulaciones = 0;
int salto_de_linea = 0;

printf(" EOF para ver el conteo \n ");

while( (c = getchar()) != EOF )
{           
if (' ' == c)
	espacios+=1;
if ('\t' == c)
	tabulaciones+=1;
if ('\n' == c)
	salto_de_linea+=1;
}

printf("Espacios ---------> %d\n" , espacios);
printf("Tabuladores ------> %d\n", tabulaciones);
printf("Saltos de linea --> %d\n", salto_de_linea);

}
