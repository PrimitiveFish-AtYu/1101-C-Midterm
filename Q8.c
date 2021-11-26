//Q8 屏大接駁車資計算(資工優惠)
#include<stdio.h>
int main()
{
    char tick='\0', IsCSIE='\0', count='\0', year='\0';
    scanf("%c%c%c%c", &tick, &count, &year, &IsCSIE);
    int error = 0,NumYear=-1;
    double fare = -1;
    if(tick < 'A' || tick > 'C')
        error = 1;
    else if(!(count == 'T' || (count >='1' && count <='9')))
        error = 1;
    else if(year < '1' || year > '6')
        error = 1;
    else if(!(IsCSIE == 'C' || IsCSIE == 'N'))
        error = 1;
    else
    {
        switch(tick)
        {
            case 'A': 
                fare = 20;
                break;
            case 'B':
                fare = 10;
                break;
            case 'C':
                fare = 23;
                break;
        }
        fare*= (count == 'T')?10:(count - '0');
        NumYear = (int)(year - '0');
        if(IsCSIE == 'C')
            fare *= 0.6D;
        else if(NumYear == 1)
            fare *= 0.9D;
        else if(count == 'T')
            fare *= 0.8D;
        if((int)fare != fare)
            fare = (int)fare + 1;
        printf("Fare=%d", (int)fare);  
    }
    if(error == 1)
    {
        printf("Error!");
    }
    printf("\n");
    
}
