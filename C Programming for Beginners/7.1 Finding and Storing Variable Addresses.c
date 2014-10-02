// Pointers
// C gives you direct access to memory

#include <stdio.h>

int main()
{
    int firstInt = 425;
    int secondInt = -672;
    char firstChar = 'C';
    float firstFloat = 2.771f;
    char firstCharArray[] = "Learn to program";
    
    // print memory address. Notice the use of &
    printf("The address of the variable firstInt: %u\n", &firstInt);
    printf("The address of the variable secondInt: %u\n", &secondInt);
    printf("The address of the variable firstChar: %u\n", &firstChar);
    printf("The address of the variable firstFloat: %u\n", &firstFloat);
    printf("The address of the variable firstCharArray: %u\n", &firstCharArray);
    
    //Assign pointer locations to variables. Notice the use of * and &
    int *pointerFirstInt;
    pointerFirstInt = &firstInt;
    
    int *pointerSecondInt;
    pointerSecondInt = &secondInt;
    
    char *pointerFirstChar;
    pointerFirstChar = &firstChar;
    
    float *pointerFirstFloat;
    pointerFirstFloat = &firstFloat;
    
    printf("Size of firstInt: %d\n", sizeof(firstInt));
        // prints 4. An Int is 4 bytes
    printf("Size of firstChar: %d\n", sizeof(firstChar));
        // prints 1. A Char is 1 byte
    return 0;
}