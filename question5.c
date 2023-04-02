/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */
#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("1.CHECK ISOSCELES TRIANGLE\n 2. RIGHT ANGLE TRIANGLE\n 3.EQUILATERAL TRIANGLE\n");
    scanf("%d",&x);
    printf("Enter the value of a and b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    switch (x)
    {
    case 1: if(b==c && a==b) 
    
          printf("THIS IS AN ISOSCELES TRIANGLE\n");
           else
           printf("NOT AN ISOCELES\n");
           break;
    case 2: if(b*b==a*a+c*c || a*a==b*b+c*c || c*c==b*b+a*a)       
            printf("THIS IS AN RIGHT ANGLE TRIANGLE\n");
            else
            printf("NOT AN RIGHT ANGLE TRIANGLE\n");
        break;
    
    
    case 3: if (a==b || b==c || c==a) 
            printf("THIS IS AN EQUILATERAL TRIANGLE\n");
            else
            printf("NOT AN EQUILATERAL TRIANGLE\n");
        break;
    
    default: printf("INVALID OPTION");
        break;
    }
}

