// takes the month number as i/p and displaynumber of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER THE MONTH NUMBER\n");
    scanf("%d",&x);
    switch(x){
        case 1: printf("THIS IS JANUARY AND THERE ARE 31 DAYS");
        break;
        case 2: printf("THIS IS februry AND THERE ARE 28 DAYS AND 29 DAYS IN A LEAP YEAR");
        break;
        case 3: printf("THIS IS MARCH AND THERE ARE 30 DAYS");
        break;
        case 4: printf("THIS IS APRAIL AND THERE ARE 31 DAYS");
        break;
        case 5: printf("THIS IS MAY AND THERE ARE 30 DAYS");
        break;
        case 6: printf("THIS IS JUNE AND THERE ARE 31 DAYS");
        break;
        case 7: printf("THIS IS JULY AND THERE ARE 30 DAYS");
        break;
        case 8: printf("THIS IS AUGUST AND THERE ARE 31 DAYS");
        break;
        case 9: printf("THIS IS SEPTEMBER AND THERE ARE 30 DAYS");
        break;
        case 10: printf("THIS IS OCTOBER AND THERE ARE 31 DAYS");
        break;
        case 11: printf("THIS IS NOVEMBER AND THERE ARE 3O DAYS");
        break;
        case 12: printf("THIS IS DECEMBER AND THERE ARE 31 DAYS");
        break;
        default:printf("THIS IS WRONG STATEMENT");
    }
}
