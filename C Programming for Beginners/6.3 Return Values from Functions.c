
#include <stdio.h>

// Function Prototype. Not void, it will return an integer.
// it will take as an argument, an integer called x
int square(int x);

int main()
{
    printf("Enter your number to be squared: \n");
    int userNum;
    scanf("%d", &userNum);
    int result = square(userNum);
    
    printf("The result is %d\n", result);
    
    return 0;
}

int square(int x)
{
    return (x*x);
}