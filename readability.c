#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main (void)
{

    // Get the text user's want to evaluate
    string text = get_string("Type your text here: ");
    int letters = 0, words = 1, sentences = 0, grade;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i])){
            letters++;
        }
        else if (isspace(text[i]))
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    float L = letters / (float)words * 100;
    float S = sentences / (float)words * 100;

    grade = round(0.0588 * L - 0.296 * S - 15.8);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}