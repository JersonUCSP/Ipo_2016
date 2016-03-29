#include<stdio.h>
main()
{
int a,b,c,d,min, mcd=1;
	printf("Primer valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	printf("Tercer valor: ");
	scanf("%d", &c);
	printf("Cuarto valor: ");
	scanf ("%d", &d);

	min=a;
    if (min>b)
        min=b;
    if (min>c)
        min=c;
    if (min>d)
        min=d;
    
    for(min; min>=1; min-=1){
    	if(a%min==0 && b%min==0  && c%min==0 && d%min==0);
    		mcd=mcd*min;}
    printf("El valor de MCD es %d \n", mcd);
    	}
    	

