#include <stdio.h>
int main()
{
    float a, b;
    char n;
    printf("enter first no.:");
    scanf("%f", &a);
    printf("enter  second no.:");
    scanf("%f", &b);
    printf("enter operation:+,-,*,/ :");
    scanf(" %c", &n);

    if (n == '+')
    {
        printf("the vaule of %f and %f is %f", a, b, a + b);
    }
    else if (n == '-')
    {
        printf("the value is %f and %f is %f", a, b, a - b);
    }
    else if (n == '*')
    {
        printf("the value is %f and %f is %f", a, b, a * b);
    }
    else if (n == '/')
    {
        if (b == 0)
        {
            printf("this is not possible");
        }

        else
        {
            printf("the value is %f and %f is %f", a, b, a / b);
        }

    }
   
    return 0;
}