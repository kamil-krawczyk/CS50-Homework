/* This is my CS50 Homework.
* Kamil Krawczyk
* Week 1:
* Mario - builds a half-pyramid to user specified height. */

#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // Initialize variables for height.
    int height;
    
    // Prompt the user.
    do {
        printf("Select a height: \n");
        height = GetInt();
        // Return error code of 0 if null is selected by user.
        if (height == 0) {
            return 0;
        }
    } while ((height < 1) || (height > 23));

    // Print the half-pyramid.
    for (int i = 0; i < height; i++) {
        
        // Print the spaces first.
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        
        // Print hashes for the remainder of the line.
        for (int k = 0; k < i + 2; k++) {
            printf("#");
        }
        
        // Start a new line before looping again.
        printf("\n");
    }
    
    return 0;
}