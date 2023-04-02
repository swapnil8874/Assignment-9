#include<stdio.h>
int main()
{
    int a,b,n;
     while(1)
     {
    printf("1.ADDiTION\n 2.SUBTRACTION\n 3.MULTIPLY\n 4.DIVIDE\n 5.EXIT\n");
     printf("CHOOSE THE VALUE\n");
     scanf("%d",&n);
    
         printf("ENTER THE VALUE OF A AND B\n");
        scanf("%d%d",&a,&b);
         switch(n)
       {
            case 1:printf("THE ADD OF %d AND %d IS %d\n",a,b,a+b);
            break;
            case 2:printf("THE SUB OF %d AND %d IS %d\n",a,b,a-b);
            break;
            case 3:printf("THE MUL OF %d AND %d IS %d\n",a,b,a*b);
            break;
            case 4:printf("THE DIV OF %d AND %d IS %d\n",a,b,a/b);
            break;
            case 5:printf("EXIT");
            break;
        }
     }
}