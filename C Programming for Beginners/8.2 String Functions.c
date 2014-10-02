// #include <string.h> for string functions

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[] = "The quick brown fox jumped over the lazy dogs.";
    int length = strlen(sentence);
    
    printf("In sentence there are %d characters.\n", length);
    
    
    //If you want to append string2 to string1, you must declare enough space in string1 in order to do so.
    char string1[20] = "Brian ";
    char string2[] = "Gibson";
    
    // strncat(target, string to concatenate, length you are concatenating
    strncat(string1, string2, 7);
    
    printf("After concatenation, string1 looks like this: %s\n", string1);
    printf("String 1 length: %d\n", strlen(string1));
    
    char stringA[] = "Today";
    char stringB[] = "Today";
    
    // will give value 0 (true) if these two are the same
    if (strcmp(stringA, stringB)==0)
    {
        printf("These strings are the same\n");
    }
    else
    {
        printf("These strings are not the same.\n");
    }
    
    return 0;
}