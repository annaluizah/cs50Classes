#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
      int value_begin, value_end, atual_value, years = 0;

      do
      {
            value_begin = get_int("Type here the number of Lhamas to start: ");
      }
      while (value_begin < 9);

      do
      {
            value_end = get_int("Now, type the final number of Lhamas you want: ");
      }
      while (value_begin > value_end);

      while (value_begin < value_end)
      {
            value_begin = value_begin + (ceil(value_begin / 3)) - (ceil(value_begin / 4));
            years++;
      }

     printf("Years: %i\n", years);
}