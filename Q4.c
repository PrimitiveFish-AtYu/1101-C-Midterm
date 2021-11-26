//Q4 驗證碼計算
#include<stdio.h>
int main()
{
    int N1, N2, N3, N4;
    scanf("%1d%1d%1d%1d", &N1, &N2, &N3, &N4);
    int A1, A2, A3;
    A1 = N1 + N2 + N3 + N4;
    A2 = (N1 * N4)%10 + 1;
    A3 = (int)((double)A1 / A2);
    printf("The verification code of %d%d%d%d is %d.\n", N1, N2, N3, N4, A3);
}
