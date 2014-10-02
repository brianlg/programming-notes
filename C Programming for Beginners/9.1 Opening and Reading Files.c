#include <stdio.h>

int main()
{
    FILE *pFile;    //pointer to file *
    char input[81];
    int lineCounter;
    
    lineCounter = 1;
    
    // r means read mode.
    pFile = fopen("/Users/briangibson/Desktop/poem.txt", "r");
    
    if (pFile != NULL)
    {
        // Process File
        // feof - file end of file
        while (!feof(pFile))
        {
            fgets(input, 81, pFile);
            printf("%d: %s\n", lineCounter, input);
            lineCounter++;
        }
        
        fclose(pFile);
    }
    else
    {
        // IO Error
        printf("Problem with file.\n");
    }
    
    return 0;
}