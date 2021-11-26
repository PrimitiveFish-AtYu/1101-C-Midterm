//Q5 座標檢查
#include<stdio.h>
int main()
{
    //    length(x) 200 
    //    witdth(y): 300 
    //    so x range => -100 ~ 100
    //    y range=> -150 ~ 150
    int X, Y;
    scanf("(%d,%d)", &X, &Y);
    if(X<-100 || X>100 || Y<-150 || Y>150)
    {
        printf("Outside\n");
    }
    else
    {
        printf("Inside\n");
    }
}
