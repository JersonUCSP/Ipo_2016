 #include<stdio.h>
  #define Tamanho 500

  void Imprime_Cadena(char [], int );
  int main()
  {    
  int a;
  int b = 0;
  char cadena[Tamanho] = {0, 0};

  printf("\nComprobar si tu linea tiene mas de 80 caracteres.\n");
  
  while ( (a = getchar()) != EOF)            
  cadena[++b] = a;
                  
 
  if ( b > 80 )
  Imprime_Cadena(cadena, b);
  

  if ( b > Tamanho )
  printf("\nSe excedio en caracteres en una misma linea ", b);

 }              
 
 void Imprime_Cadena( char Cadena[], int tamanho)

 {  

  int i = 1;
  for (i  = 1; i <= tamanho; i++)
  {  
  printf("%c", Cadena[i]);
  }

  printf("\n");
 }    
