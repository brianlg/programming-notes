#include <stdio.h>

int main()
{
    int counter = 100;        // initialize at 0
    
    /*
    while(counter < 101)
    {
        printf("%i\n", counter);
        counter++;
    }
    */
    
    /*
    while (counter > 0)
    {
        printf("%i\n", counter);
        counter = counter - 10;
    }
    */
    
    do
    {
        printf("%i\n", counter);
        counter = counter - 5;
    }
    while (counter > 0);
    
    
    return 0;
}
