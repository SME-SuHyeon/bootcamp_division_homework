#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a;

    scanf("%d", &a);

    printf("%d", a % 10);
    a /= 10;

    printf("%d", a % 10);
    a /= 10;

    printf("%d", a);

    return 0;
}