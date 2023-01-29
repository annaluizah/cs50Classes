#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long cc_number;
    do
    {
        cc_number = get_long("Type your credit card here: ");
    }
    while (cc_number < 0);

    int card1, card2, card3, card4, card5, card6, card7, card8;

    card1 = ((cc_number % 100) / 10)*2;
    card2 = ((cc_number % 10000) / 1000)*2;
    card3 = ((cc_number % 1000000) / 100000)*2;
    card4 = ((cc_number % 100000000) / 10000000)*2;
    card5 = ((cc_number % 10000000000) / 1000000000)*2;
    card6 = ((cc_number % 1000000000000) / 100000000000)*2;
    card7 = ((cc_number % 100000000000000) / 10000000000000)*2;
    card8 = ((cc_number % 10000000000000000) / 1000000000000000)*2;

    card1 = (card1 % 100 /10) + (card1 % 10);
    card2 = (card2 % 100 /10) + (card2 % 10);
    card3 = (card3 % 100 /10) + (card3 % 10);
    card4 = (card4 % 100 /10) + (card4 % 10);
    card5 = (card5 % 100 /10) + (card5 % 10);
    card6 = (card6 % 100 /10) + (card6 % 10);
    card7 = (card7 % 100 /10) + (card7 % 10);
    card8 = (card8 % 100 /10) + (card8 % 10);

    int sum1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;

    int card09, card10, card11, card12, card13, card14, card15, card16;

    card09 = (cc_number % 10);
    card10 = ((cc_number % 1000) / 100);
    card11 = ((cc_number % 100000) / 10000);
    card12 = ((cc_number % 10000000) / 1000000);
    card13 = ((cc_number % 1000000000) / 100000000);
    card14 = ((cc_number % 100000000000) / 10000000000);
    card15 = ((cc_number % 10000000000000) / 1000000000000);
    card16 = ((cc_number % 1000000000000000) / 100000000000000);

    int sum2 = card09 + card10 + card11 + card12 + card13 + card14 + card15 + card16;
    int sum3 = sum1 + sum2;

    int length = 0;
    long visa = cc_number;
    long amex = cc_number;
    long master = cc_number;

    if((sum3 % 10) != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    while (cc_number > 0)
    {
        cc_number = cc_number / 10;
        length++;
    }

    while (visa >= 10)
    {
        visa /= 10;
    }
    if (visa == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
        return 0;
    }

    while (amex >= 10000000000000)
    {
        amex /= 10000000000000;
    }
    if (length == 15 && (amex == 34 || amex == 37))
    {
        printf("AMEX\n");
        return 0;
    }

    while (master >= 100000000000000)
    {
        master /= 100000000000000;
    }
    if (length == 16 && (master == 51 || master == 52 || master == 53 || master == 54 || master == 55))
    {
        printf("MASTERCARD\n");
        return 0;
    }
    else
    printf("INVALID\n");
    return 0;
}

