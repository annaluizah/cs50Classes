#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    //
    if (argc != 2)
    {
        printf("Usage: ./ key \n");
       return 1;
    }

    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: The key must only contain letters. \n");
            return 1;
        }
        else if ((strlen(key) != 26))
        {
            printf("Usage: The key must contain 26 characters. \n");
            return 1;
        }
    }
            for (int i = 0; i < strlen(key); i++)
            {
                for (int j = i - 1; j < strlen(key); j++)
                {
                    if (key[i] == key[j])
                    {
                        printf("Usage: Key cannot contain repeating characters. \n");
                        return 1;
                    }
                }
            }

            string plaintext = get_string("Plaintext: ");
            printf("Ciphertext: ");

            for (int k = 0; k < strlen(plaintext); k++)
                {
                    if (isupper(plaintext[k]))
                    {
                        int letter = (plaintext[k] - 65);
                        printf("%c", toupper(key[letter]));
                    }

                    else if (islower(plaintext[k]))
                    {
                        int letter = (plaintext[k] - 97);
                        printf("%c", tolower(key[letter]));
                    }

                    else
                    {
                        printf("%c", plaintext[k]);
                    }
                }
                printf("\n");
                return 0;
}