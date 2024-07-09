#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 0 and RAND_MAX
    int random_number = (rand()%100)+1;
    int a;
    int no_of_guesses=0;

    // Print the random number
    //printf("Random number: %d\n", random_number);
    do{
        printf("Guess the number:");
        scanf("%d",&a);
        no_of_guesses++;
        if(a>random_number)
            printf("enter the lower number\n");
        else
            printf("enter the higher number\n");

    }
    while(a!=random_number);
    
    printf("You guessed the number in %d\n",no_of_guesses);

    return 0;
}
