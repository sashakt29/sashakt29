#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}
int divrem(int a, int b)
{
    return a % b;
}
float expo(float a, float b)
{
    return pow(a, b);
}

int main()
{
    float x, y, c, d;

table:
    printf("write the first no-->");
    scanf("%f", &x);
    printf("write the second no-->");
    scanf("%f", &y);
    printf("what to do with them [1=add/2=subtract/3=multiply/4=divide/5=exponent]\n");
    scanf("%f", &c);
    if (c == 1)
    {
        printf("adding it gives->%f", add(x, y));
    }
    else if (c == 2)
    {
        printf("subtractng it gives->%f", sub(x, y));
    }
    else if (c == 3)
    {
        printf("multiplying it gives->%f", mul(x, y));
    }
    else if (c == 4)
    {
        if (x > y && y != 0)
        {
            printf("dividing it gives ->%f", div(x, y));
        }
        else if (x < y)
        {
            printf("divisor is grater than dividend!");
        }
        else if (y == 0)
        {
            printf("divisor is equal to 0!");
        }
        else
        {
            printf("????????????????");
        }
    }
    else if (c == 5)
    {
        if (expo(x, y) <= 2100000000)
            printf("powering it gives->%f", x, y, expo(x, y));
        else
        {
            printf("over flowed");
        }
    }
    else
    {
        printf("invalid input");
    }
    table2:
    printf("\ndo you want do more calculations[1=yes/2=no]\n");
    scanf("%f",&d);
    if (d==1)
    {
        goto table;
    }
    else if (d==2)
    {
        printf("ok,press enter to exit");
    }
    else
    {
         printf("invaid value,press enter to exit");
         goto table2;
    }

    getch();
    return 0;
}
