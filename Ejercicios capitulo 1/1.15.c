#include<stdio.h>

void convertidor(int inicio, int fin, int salto){
    printf("\nConversion de Farenheit a Celsius \n");
    printf(" F\t C\n");

    float c, f;
    for(f=inicio; f<=fin; f+=salto){
        c=5*(f-32) /9;
        printf("%3.0f %6.1f\n", f,c);
    }
}
    
    int main(){
    int inicio, fin, salto;
    printf("\n\nParametro 1: ");
    scanf("%d", &inicio);
    printf("Parametro 2: ");
    scanf("%d", &fin);
    printf("Saltos: ");
    scanf("%d", &salto);
    convertidor(inicio, fin, salto);

    return 0;
	}
