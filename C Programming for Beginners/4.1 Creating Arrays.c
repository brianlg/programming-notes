#include <stdio.h>

int main()
{
    int ages[5];
    
    ages[0] = 37;
    ages[1] = 31;
    ages[2] = 3;
    ages[3] = 1;
    ages[4] = 30;
    
    float gpas[] = {3.14f,2.55f,3.44f,3.99f,2.1f,1.75f};
    // the f after each specifies float
    
    printf("One of my family members is %d yeard old.\n", ages[1]);
    printf("Another of my family members is %d years old.\n", ages[4]);
    printf("My GPA was %.2f.\n", gpas[2]);
    
    return 0;
}
