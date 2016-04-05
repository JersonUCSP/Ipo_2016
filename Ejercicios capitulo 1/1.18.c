#include <stdio.h>
#define MAX     100

int main(){
    int ch;
    while ((ch=getchar())!=EOF){
        if (ch!=' ' && ch!='\t')
            putchar(ch);
    }

    return 0;
}
