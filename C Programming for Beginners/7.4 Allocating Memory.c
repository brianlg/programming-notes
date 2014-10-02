// Allocating memory is very important
// It's also important to free up memory that you've allocated. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // we declare the pointer as void since we don't know the type (ie we dont know if char, int, etc)
    void *pointerToSpaceInAllocatedMemory;
    
    // 2000 bytes of memory will be allocated, then the pointer will point to the first byte in that memory.
    pointerToSpaceInAllocatedMemory = malloc(2000);
    
    printf("Memory block starts at address: %p\n", pointerToSpaceInAllocatedMemory);
    
    // free the memory to prevent memory leak
    free(pointerToSpaceInAllocatedMemory);
    
    // after freeing memory, we want to nullify the pointer.
    pointerToSpaceInAllocatedMemory = NULL;
    
    return 0;
}