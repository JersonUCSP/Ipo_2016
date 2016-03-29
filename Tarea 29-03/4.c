#include<stdio.h>
main()
{
	int num=0, a, i;
	scanf("%d", &a);
	for(i=1; i<a; i++){
		num+=i;}
	printf("%d\n", num);
	getch();
}
