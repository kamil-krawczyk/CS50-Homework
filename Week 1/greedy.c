/* This is my CS50 Homework.
* Kamil Krawczyk
* Week 1:
* Greedy - calculates the minimum number of coins needed to dispose change. */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    
    // Declare variables.
    float change;
    int coin_counter = 0; // Must initialize here.
    int change_int;
    
    // Query user for amount of change.
    do {
        printf("How much change do you owe?\n");
        change = GetFloat();
    } while (change < 0.00);
    
    // Calculate the number of coins needed to fulfill the request.
    // First, round the change to an integer value. Using math library for round fxn.
    change_int = round(change * 100);
    
    /* Calculate number of coins. Algorithm takes value, subtracts chunks of coin values, and checks to see whether or not one can still use
	that type of coin with a while loop check. */
    // Begin with quarters.
    while (change_int >= 25) {
        change_int -= 25;
        coin_counter += 1;
    }
    
    // Then sort out dimes.
    while (change_int >= 10) {
        change_int -= 10;
        coin_counter += 1;
    }
    
    // Then nickels.
    while (change_int >= 5) {
        change_int -= 5;
        coin_counter += 1;
    }
    
    // And lastly, cents.
    while (change_int >= 1) {
        change_int -= 1;
        coin_counter += 1;
    }
    
    // Print the result.
    printf("%i\n", coin_counter);
    
    // Return null if error present.
    return 0;
}