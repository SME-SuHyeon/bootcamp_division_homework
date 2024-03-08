#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!

    int age;
    scanf("%d",&age);

    if(age<12)
    printf("AM");
    else
    printf("PM");

    return 0;
}