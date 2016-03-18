#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
float f,c;
cout<<"Conversion de Celsius a Farenheit \n";
cout << char(167) << "C\t" << char(167) << "F\n";
for(float i = 0; i<=300;i+=20)
    {
        f=(9*i+160)/5;
        printf("%3.0f %6.1f\n", i,f);
    }
return 0;
}
