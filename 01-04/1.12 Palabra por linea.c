#include<stdio.h>
main()
{
	printf("Palabra por salto de linea  \n");
	int a, ante ='e';
	while ((a=getchar())!= EOF){
		if(a != ' ' && a!= '\n' && a != '\t'){
			ante='i';
			putchar(a);
		}
		else{
			if(ante=='i'){
				printf("\n");
				ante='e';
			}
		}
	}
}
