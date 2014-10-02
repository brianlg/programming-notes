#include <stdio.h>

int main()
{
    /*
    int x = 0;
    while(x < 101)
    {
        if(x == 50)
        {
            printf("breaking out of loop!!!!!\n");
            break;
        }
        
        printf("%d\n", x);
        x++;
    }
    */
    
    int x = 0;
    
    while (x < 101)
    {
        if(x%2 != 0)            // prints even numbers
        {
            x++;
            continue;
        }
        
        printf("%d\n", x);
        x++;
    }
    
    
    return 0;
}