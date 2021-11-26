//Q7 手機上網費用計算(三種方案)
#include<stdio.h>
int main()
{
    int way,mb;
    scanf("%d %d", &way, &mb);
    int result = -1;
    //4GB = 4096MB
    const int GB4 = (1024*4);
    if(way < 1 || way > 3 || mb < 0)
    {
        printf("Error!");
    }
    else
    {
        switch(way)
        {
            case 1:
                result = 399;
                break;
            case 2:
                result = (int)(299 + ((mb > (GB4))?((mb-GB4)*0.2D):0) + 0.5D);
                break;
            case 3:
                result = (int)(mb * 0.15D + 0.5D);
                break;
        }
        printf("%d",result);
    }
    printf("\n");
}
