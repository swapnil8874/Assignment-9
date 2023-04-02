#include<stdio.h>
int main()
{
    int b;
    printf("ENTER THE VVALUE\n");
    scanf("%d",&b);
    switch (b>0)
    {
    case 1: printf("converted value of b is -%d",b);
        break;
    case 0: printf("converted value is %d",-1*b);
    break;
    }
}