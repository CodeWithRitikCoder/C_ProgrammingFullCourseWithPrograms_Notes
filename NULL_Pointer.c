//Write a program to Use NULL pointer in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("NULL pointer in C programming\n");
    /*What is a NULL pointer in C programming ?
        *-> Null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a void object.
        *-> A null pointer is guaranted to compare unequal to any pointer that points to a valid object.
        *-> Dereferencing a null pointer is undefined behavior in C, and a connforming implementation is allowed to assume that any pointer that is dereferenced is no NULL.
        *-> NULL pointer is a specific pointer which is mentioned in C standard and it has specific purposes.
        *-> NULL pointer gives a functionality to C porgrammer to check whether a pointer is legitimate or not.
    second point about NULL pointer in simple way.
        *-> A NULL pointer is a pointer that points to NULL (nothing.).
        *-> A NULL pointer should not be dereferenced.
        *-> A check must be run by the C programmer to know whether a pointer is NULL before dereferenceing it.
    Use of NULL pointer in C programming.
        *-> To initialized a pointer variable in cases where pointer variable has not been assigned any valid address yet.
        *-> To check for legitimate address location before accessing any pointer variable.
        *-> By doing so, we can perform error handling while using pointers with C.
        *-> Example of such error handling can be: dereference pointer variable only if it's not NULL.
        *-> To pass a NULL pointer to a function argument when we don't want to pass any valid memory address.
    More on NULL pointers.
        *-> NULL macro is defined as ((void *)0) in header files fo most of the C compiler implementations.
        *-> NULL pointer vs Uninitialized pointer - An uninitialized pointer contains an undefined value.
        *-> A NULL pointer stores a defined value, which is the one decided by the environment to not be a void memory address for any object.
        *-> NULL poinnter vs void pointer - NULL pointer is a value where as void pointer is a type.

    Let's Some code to know more about NULL pointer in C programming.
    */
    int a= 34, b;
    int *ptr= NULL;
    // ptr= &a;// if we will do this then this will not called NULL pointer.
    if(ptr != NULL){
    printf("The address of a is : %d\n", *ptr);
    }else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    //That's all about NULL pointer in C programming.
    
    //getch();
    return(0);
}