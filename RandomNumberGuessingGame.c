#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomnumber = (rand() % 100 + 1);
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess the Number: ");
        scanf("%d", &guessed);
        if (guessed > randomnumber || guessed < randomnumber)
        {
            printf("\033[1;31mWRONG!\033[0m\n");
        }
        else
        {
            printf("\033[1;32mCONGRATS!\033[0m\n");
        }
        no_of_guesses++;
    } while (guessed != randomnumber);
    
    printf("Number of guesses you took is %d.\n", no_of_guesses);
    return 0;
}