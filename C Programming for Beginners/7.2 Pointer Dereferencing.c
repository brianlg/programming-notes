// Pointers are useful when you dereference pointers and access the values.
// When printing address of a pointer - 0x prepended to address means the value is in hexadecimal
// ^ ex. 0x7fff5fbff7c8
// Dereferencing Operator is *

#include <stdio.h>

int main()
{
    int playerScore = 15000;
    int *pointerPlayerScore = &playerScore;
    
    // %p signifier = pointer
    printf("Address of playerScore: %p\n", pointerPlayerScore);
    printf("The value of playerScore is: %d\n", playerScore);
    printf("The value of playerScore (through it's pointer) is: %d\n", *pointerPlayerScore);
    // line above prints same value as %d playerScore (both 15000)
    
    playerScore = playerScore + 1500;
    printf("Added 1500 to playerScore.\n");
    printf("The value of playerScore is: %d\n", playerScore);
    printf("The value of playerScore (through it's pointer) is: %d\n", *pointerPlayerScore);

    *pointerPlayerScore = *pointerPlayerScore - 1000;
    printf("Subtracted 1000 from playerScore via it's pointer.\n");
    printf("The value of playerScore is: %d\n", playerScore);
    printf("The value of playerScore (through it's pointer) is: %d\n", *pointerPlayerScore);
    
    // Don't do this -- moving the pointer mathematically.
    pointerPlayerScore = pointerPlayerScore -10;
    printf("Subtracted 10 from pointer playerScore.\n");
    printf("The value of playerScore is: %d\n", playerScore);
    printf("The value of playerScore (through it's pointer) is: %d\n", *pointerPlayerScore);
    
    return 0;
}