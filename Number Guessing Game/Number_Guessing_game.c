#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));
    int no_of_guesses = 0;
    int guessed;

    // Generate and print a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    // printf("Random Number: %d\n", randomNumber);
    do
    {
        printf("Guess the number\n");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("Higher number please\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);
    printf("You Guessed the number in %d guesses", no_of_guesses);

    return 0;
}
