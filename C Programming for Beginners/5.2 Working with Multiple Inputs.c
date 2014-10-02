// You need the address (&) when you use scanf with anything OTHER THAN char array

#include <stdio.h>

int main()
{
    float operand1, operand2;
    
    printf("please enter two numbers you want multiplied together: ");
    
    scanf("%f %f", &operand1, &operand2);
    
    float results = operand1 * operand2;
    
    printf("the results of multiplying %.2f and %.2f is %.2f", operand1, operand2, results);
    
    return 0;
}
