// Data type is char for character
// Together these characters make up a string
// Length of array must always be one more than you're going to put.
// this is because of the \0 at the end.
// ex. my name is BRIAN - 5 character, but our array must be 6!
// B R I A N \0
// each (space) counts as a character as well.

#include <stdio.h>

int main()
{
    char name[13]="Brian Gibson";
    
    /* SAME AS ABOVE ^
    char name[] = {     'B',
                        'r',
                        'i',
                        'a',
                        'n',
                        '\0'    }; */
    
    printf("My name is %s\n", name);
    
    int i;
    for (i=0; i < 13; i++)
    {
        printf("Character number: %d is %c\n", (i+1), name[i]);
        // i+1 just starts at 1 and not 0.
    }
    
    return 0;
}
