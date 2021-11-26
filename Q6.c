//Q6 故事產生器
#include<stdio.h>
int main()
{
    char who, when, where, how, what;
    scanf("%c%c%c%c%c", &who, &when, &where, &how, & what);
    //Alex在早上到花園快樂的唱歌
    //Who在When到WhereHowWhat
    switch(who)
    {
    
        case 'a': case 'A':
            printf("Alex");
            break;
        case 'b': case 'B':
            printf("Ben");
            break;
        case 'j': case 'J':
            printf("Julia");
            break;
        case 't': case 'T':
            printf("Tim");
            break;
        default:
            printf("錯誤的人");
            break;
    }
    printf("在");
    switch(when)
    {
        case 'm': case 'M':
            printf("早上");
            break;
        case 'a': case 'A':
            printf("下午");
            break;
        case 'e': case 'E':
            printf("晚上");
            break;
        default:
            printf("錯誤的時間");
            break;
    }
    printf("到");
    switch(where)
    {
        case 's': case 'S':
            printf("學校");
            break;
        case 'r': case 'R':
            printf("餐廳");
            break;
        case 'g': case 'G':
            printf("花園");
            break;
        default:
            printf("錯誤的地方");
            break;
    }
    switch(how)
    {
        case 'h': case 'H':
            printf("快樂的");
            break;
        case 's': case 'S':
            printf("難過的");
            break;
        case 'a': case 'A':
            printf("生氣的");
            break;
        default:
            printf("錯誤的");
            break;
    }
    switch(what)
    {
        case 'r': case 'R':
            printf("看書");
            break;
        case 'e': case 'E':
            printf("吃飯");
            break;
        case 's': case 'S':
            printf("唱歌");
            break;
        default:
            printf("做錯誤的事");
            break;
    }
    printf("\n");
    
}
