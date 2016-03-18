#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
float f,c;
cout<<"Conversion de Farenheit a Celsius \n";
cout << char(167) << "F\t" << char(167) << "C\n";
for(float i = 0; i<=300;i+=20)
    {
        c=5*(i-32) /9;
        printf("%3.0f %6.1f\n", i,c);
    }
return 0;
}
