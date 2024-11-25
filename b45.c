#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lucky_number, user_guess;
    int attempts = 0;

    srand(time(0)); 

    lucky_number = rand() % 100 + 1;

    printf("Welcome to the Lucky Number Game!\n");
    printf("Guess the lucky number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        attempts++;
        
        if (user_guess < lucky_number) {
            printf("Too low! Try again.\n");
        } else if (user_guess > lucky_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the lucky number %d in %d attempts.\n", lucky_number, attempts);
            break; 
        }
    }
}
