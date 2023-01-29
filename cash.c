#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float dollar;
    int cents, coins = 0;
    do
    {
        dollar = get_float("Your change in U$: ");
    }
    while (dollar <= 0);

    cents = round(dollar * 100);

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }
    printf("\n");
    printf("Number of the coins needed: %i\n", coins);
}