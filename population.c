#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // starting population
    int m; // ending population
    int y; // years

    // Prompt the user for a starting population:
    do
    {
        n = get_int("Starting llama population? ");
    }
    while (n < 9);

    // Prompt the user for an ending population:
    do
    {
        m = get_int("Ending llama population? ");
    }
    while (m < n);

    // Calculate number of years until we reach threshold
    // n / 3 llamas are born
    // n / 4 llamas pass away
    // n = n + (n / 3) - (n / 4)
    for(y = 0; n < m; y++){
        n = n + (n / 3) - (n / 4);
    }

    // TODO: Print number of years
    {
    printf("Years: %i\n", y);
    }
}
