// C doesn't have a true strings concept
// character arrays are a substitute for strings
// strings are characters followed by \0
// when you make a character array, you also make a pointer automatically
// all arrays in C utilize pointers
// You cannot initialize a string from an existing string.
// ex. char companyNameDeux[] = companyName;   // Will not work!!!

#include <stdio.h>

int main()
{
    char companyName[] = "LearnToProgram, Incorprated";
    printf("Company name: %s\n", companyName);
    printf("Pointer to companyName in memory: %p\n", companyName);
    
    return 0;
}