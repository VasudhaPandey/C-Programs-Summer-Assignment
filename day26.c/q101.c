#include <stdio.h>

int main()
{
    int guess;
    int number = 25;

    printf("Guess the number (1 to 50): ");
    scanf("%d", &guess);

    if(guess == number)
        printf("Congratulations! You guessed the correct number.\n");
    else if(guess < number)
        printf("Your guess is too low.\n");
    else
        printf("Your guess is too high.\n");

    return 0;
}