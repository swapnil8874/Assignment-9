#include<stdio.h>
int main()
{
    int a;
    printf("ENTER ANY NUMBER\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("UPPER NEAREST NUMBER IS %d",a+1);
    else
    printf("THIS IS ODD NUMBER AND ITS UPPER NEAREST ODD NUMBER IS %d",a+2);
    
}