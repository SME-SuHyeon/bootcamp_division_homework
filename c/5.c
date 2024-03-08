#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!

    int age,tall;

    scanf("%d",&age);
    scanf("%d",&tall);


    if(age>=14||tall>=160)
        printf("X");
    else
        printf("O");

    return 0;
}