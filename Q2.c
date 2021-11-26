//Q2 溫度轉換
#include<stdio.h>
int main()
{
    double c,f;
    scanf("%lf", &c);
    f = c * (9.0D/5.0D) + 32.0D;
    printf("%.3lfC = %.3lfF\n", c, f);
}
