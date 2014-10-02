#include <stdio.h>

void displayStuff(void);

// gloabal variable
int age = 26;

int main()
{
    //int age = 26;
    float gpa = 3.55f;
    char grade = 'A';
    
    printf("My GPA was %.2f \n", gpa);
    printf("My age is %d\n", age);
    printf("Brian got an %c on his test.\n", grade);
    displayStuff();
    
    return 0;
}

void displayStuff(void)
{
    printf("From displayStuff(); my age is %d\n", age);
}