// 알람 시계 2884 - 보고 따라서 연습하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
​;
int main()
{
    unsigned int H, M;

    scanf("%d %d", &H, &M);
    ​;
        if (H == 0 && M < 45) {
            H = 23;
        }
        else if (H == 0 && M > 45) {
            ​;
        }
        else if (M < 45) {
            H--;
        }

    if ((((M + 45) / 30) & 0x1) != 0) {
        M = (M + 45) % 30;
    }
    else {
        M = (M + 45) - 30;
    }

    printf("%d %d\n", H, M);
    ​;
        return 0;
}