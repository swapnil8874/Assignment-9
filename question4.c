/* Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid")*/
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER ANY NUMBER WHICH IS ONE OF THEM 1   2   3\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("GOOD\n");
        break;
        case 2: printf("BETTER\n");
        break;
        case 3: printf("BEST\n");
        break;
        default : printf("INVAlID");
    }
}