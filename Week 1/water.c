/* This is my CS50 Homework.
* Kamil Krawczyk
* Week 1:
* Water - converts minutes you shower in to number of bottles of water wasted. */

#include <stdio.h>
#include <cs50.h>

int main(void) {
	
    // Prompt user with instructions.
    printf("How long do you wish to shower (in minute)?\n");
    
    // Initialize variables in memory.
    int minutes, ounces, bottles;
    
    // Request user input.
    do {
        minutes = GetInt();
        if (minutes < 0) {
            printf("Choose a positive value! \n");
        } else if (minutes == 0) {
            printf("You cannot shower for zero minutes!\n");
        } else {
            printf("You chose %i minutes.\n", minutes);
        }
    } while (minutes <= 0);
    
    // Print a space.chec
    printf("\n");
    
    // Calculate ounces per minute (192 ounces/minute).
    ounces = minutes * 192;
    
    // Calculate number of bottles (16 ounce/bottle).
    bottles = ounces / 16;
    
    // Print results.
    printf("Minutes showered: %i\n", minutes);
    printf("Bottles of water: %i\n", bottles);
    
}