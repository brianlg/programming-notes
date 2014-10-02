#include <stdio.h>

int main()
{
    long propertyValue = 975000;
    float taxRate;
    
    if (propertyValue < 125000)
    {
        taxRate = 0.005;
    }
    else if (propertyValue < 225000)
    {
        taxRate = 0.0065;
    }
    else if (propertyValue <500000)
    {
        taxRate = 0.0075;
    }
    else if (propertyValue < 800000)
    {
        taxRate = 0.0085;
    }
    else
    {
        taxRate = 0.0099;
    }
    
    float taxes = taxRate * propertyValue;
    
    printf("Your tax rate is %.4f.\n", taxRate);
    printf("Your tax bill is $%.2f.\n", taxes);
    
    return 0;
}
