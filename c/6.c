#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    char A;

    scanf("%c",&A);

    if(A == 'a'||A=='e'||A=='o'||A=='u'||A=='i')
        printf("O");
    else
        printf("X");

    return 0;
}