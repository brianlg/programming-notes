#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Brian Gibson";       // plus the terminating character \0
    printf("Your name is %s.\n", name);
    
    int length = strlen(name);
    
    printf("There are %d characters in the string. \n", length);
    
    return 0;
}