#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!

    int n;

    while(1)
    {
        scanf("%d",&n);
        if(n>0)
            break;
        printf("X\n");
    }

    printf("%d",(n*(n+1))/2);

    return 0;
}