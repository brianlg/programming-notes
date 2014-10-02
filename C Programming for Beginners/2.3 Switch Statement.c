// Switch Statement
// See the case below, you can assign more than one per condition.
// Notice the top two, you can receive an A or a and it will print.
// Same with B or b. 
// But if not assigned for C - F, you must enter capital exactly as in the case.

#include <stdio.h>

int main()
{
    char letterGrade = 'B';
    
    switch (letterGrade)
    {
            case 'A':
            case 'a':
            printf("Great job! Outstanding achievement");
            break;
            
            case 'B':
            case 'b':
            printf("Good job! Above average achievement");
            break;
            
            case 'C':
            printf("Average");
            break;
            
            case 'D':
            printf("Low but passing.");
            break;
            
            case 'F':
            printf("Failure.");
            break;
            
        default:
            printf("You receieved an irregular grade.");
    }
    
    return 0;
}