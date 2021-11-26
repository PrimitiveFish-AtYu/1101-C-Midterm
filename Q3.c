//Q3 26進制轉換為10進制
#include<stdio.h>
int main()
{
    char c1,c2;
    scanf("%c%c", &c1, &c2);
    int d1,d2;
    d1 = (int)(c1-'a');
    d2 = (int)(c2 - 'a');
    printf("(%c%c)_26=(%d)_10\n", c1, c2, (d1 * 26 + d2));
}
