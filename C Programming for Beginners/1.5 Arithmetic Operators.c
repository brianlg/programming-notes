#include <stdio.h>

int main()
{
    int age = 26;
    int ageNextYear = age + 1;
    int ageFiveYearsAgo = age - 5;
    int twiceMyAge = age * 2;
    float halfMyAge = age / (float) 2;      // must use float since dividing. You want .5 ages.
    int modNumber = 19%5;
    
    int myDogsAge = 49;
    myDogsAge++;        // my dogs age = my dogs age +1
    
    // Modulus is the remainder after division
    // 19%5 = 4
    
    printf("Age: %d\n", age);
    printf("Age next year: %d\n", ageNextYear);
    printf("Age five years ago: %d. Twice my age: %d.\n", ageFiveYearsAgo, twiceMyAge);
    printf("Half my age: %.1f\n", halfMyAge);
    printf("The result of the modulus opperation is %d\n", modNumber);
    printf("My dogs age: %d\n", myDogsAge);
    myDogsAge--;
    printf("My dogs age: %d\n", myDogsAge);

    return 0;
}
