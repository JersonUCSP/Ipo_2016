#include<stdio.h>
main(){
	int a, b=0, i, j;
	scanf("%d\n", &a);
	for(i=1; i<a;i++){
		if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11==0 )
		j+=i;
	}
	printf("%d", j);
}
