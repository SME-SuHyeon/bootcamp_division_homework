#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char str[5];

    scanf("%s",str);

    printf("%c%c%c",str[2],str[1],str[0]);

    return 0;
}

//./grade.sh c