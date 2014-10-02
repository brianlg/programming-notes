#include <stdio.h>

int main()
{
    int playerScore;        // variable declaration
    playerScore = 26000;    // initializing playerScore
    
    char firstInitial;
    firstInitial = 'M';
    
    short age = 37;         // combines declaration / initialization
    long nationalDebt = 1231231231;
    
    float gpa = 3.74;
    double taxRate = 4.575;
    
    
    printf("Score: %d\n", playerScore);
    printf("First Initial: %c\n", firstInitial);
    printf("Mark is %d years old \n", age);
    printf("National debt: %ld\n", nationalDebt);
    printf("My fake GPA: %.2f \n", gpa);
    printf("The tax rate is %f \n", taxRate);
    
    return 0;
}
