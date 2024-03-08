#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    scanf("%d",&n);

    printf("%d\n",(n*(n+1))/2);

    int a=1;

    if(n>=1)
    {
    for(int i=1;i<=n;i++)
        a*=i;

    printf("%d",a);
    }
    else
    printf("1");

    return 0;
}