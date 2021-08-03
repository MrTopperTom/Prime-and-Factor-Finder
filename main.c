#include <stdio.h>
#include <stdlib.h>
//made by TopperTom
int main()
{
    char type;

    printf("Type F = Factor P = Prime\n");
    scanf("%c", &type);

    switch (type)
    {
    case 'F':
        fac();
        break;

    case 'P':
        Pri();
        break;

    default:
        printf("This is not a option\nType F = Factor P = Prime\n");
    }
    return 0;
}
void fac()
{
    int number1;

     printf("Type in a number to see its prime numbers\n");
     scanf("%d", &number1);
     printf("Factors of %d are: ", number1);

    for (int i = 1; i <= number1; ++i)
    {
        if (number1 % i == 0)
        {
            printf("%d ", i);
        }
    }
}
void Pri()
{
    int number2, i, flag = 0;

    printf("Type in a number to check if its a prime number\n");
    scanf("%d", &number2);

    for (i = 2; i <=  number2 / 2; ++i)
    {
        if (number2 % i == 0)
        {
        flag = 1;
        break;
        }
    }
    if (number2 == 1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else
    {
        if (flag == 0)
        {
             printf("%d is a prime number", number2);
        }

        else
        {
            printf("%d is not a prime number", number2);
        }
    }
}
