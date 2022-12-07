#include <stdio.h>

int main()
{
    /*
        pointer = a "variable-like" reference that holds a memory address to another variable, array, etc
                  and some taskes performed more easily with pointers
                  * = indirection operator (value at address)
    */

    int age = 21;

    printf("address of age: %p\n", &age); // I guess & represents the pointer
    printf("value of age: %d\n", age);
    
    return 0;
}// main class