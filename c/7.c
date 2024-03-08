#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int year,month;

    scanf("%d",&year);

    scanf("%d",&month);

    int mode = 0;

    if(year%400 == 0)
        mode = 1;
    else if(year%100 != 0 && year % 4 == 0)
        mode = 1;

    switch (month)
    {
    case 4: case 6: case 9: case 11:
        printf("30");
        break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31");
        break;
    case 2:
        if(mode == 1)
            printf("29");
        else
            printf("28");
    break;
    default:
        break;
    }



    return 0;
}