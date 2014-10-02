// The Ternary Operator
// Like a IF statement, but written differently.
// See below where 't' : 'f'; saying if true assign t, else assign f.

#include <stdio.h>

int main()
{
    int age = 15;
    char canVote;
    
    int temp = 35;
    char isFreezing;
    
    float taxRate;
    long homeValue = 325000;
    
    taxRate = (homeValue > 350000)? .0075 : .005;
    
    isFreezing = (temp <= 32)? 't' : 'f';
    
    canVote = (age >= 18)?'t' : 'f';
    
    printf("result : %c\n", isFreezing);
    printf("Based on your home value, your tax rate is %.4f\n", taxRate);
    
    return 0;
}