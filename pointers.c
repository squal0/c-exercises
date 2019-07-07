//Program prints the values of an integer variable, its address which is stored in a pointer in a pointer variable
//and also and the address of the pointer variable
#include <stdio.h>
void main()
{
    int var = 500, *ptr_var;
    ptr_var = &var;
    printf("The value %d is stored at address: %X ", var, &var);
    printf("\nThe value %X is stored at address: %X ",ptr_var, &ptr_var);
    printf("\nThe value %d is stored at address: %X ",ptr_var, &ptr_var);
}
