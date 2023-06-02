//Write a program to Dangling Pointer in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int *functionDangling(){
    int a, b, sum;
    a= 34, b= 365;
    sum= a+ b;
    return (&sum);
}
int main(){
    printf("Dangling Pointer in C programming\n");
    /*What is Dangling Pointer in C ?
        *-> A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer.
        *-> Dangling pointers arise during object destruction when an object that has an incoming reference is deleted or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory.
    Causes of Use dangling pointer.
        *-> Deallocating of memory.
        *-> Returning local variables in function calls.
        *-> variable going out of scope.

    Deallocation of memory.
        *-> when memory is deallocated, the pointer keeps pointing to the freed space.
    Reuturning local variables in function calls.
        *-> ......
    Variable going out of scope.
        *-> ........
    
    Is Dangling pointer a good thing to have?
        *-> Dangling pointers can introduce nasty bugs in our C programs.
        *-> Dangling bugs frequently become security hales at times.
        *-> We can avoid issues by dangling pointers by initializing pointer to NULL.
        *-> After de-allocating memory. Pointer will be no longer dangling.
        *-> Assigning NULL value menans pointer is a null pointer now.
        
    Let's some code to know all about Dangling pointer.
    */

    // case 1
    int *ptr;
    ptr= (int *) malloc(7* sizeof(int));
    ptr[0]= 34;
    ptr[1]= 36;
    ptr[2]= 64;
    ptr[3]= 5;
    free(ptr);// ptr is now a dangling pointer.

    // case 2
    int *dangPtr= functionDangling(); // dangptr is now a dangling pointer.

    // case 3 : if a variable goes out of scope.
    int * dangptr3;
    {
        int a= 12;
        dangptr3= &a;
    }
    //Here variable a goes out of scope which means dangPtr3 is painting to a location which is freed and hence dangPtr3 is now a dangling pointer.

    
    //getch();
    return(0);
}