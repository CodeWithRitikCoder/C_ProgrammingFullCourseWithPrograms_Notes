//Write a program to use Dynamic memory allocation in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Dynamic memory allocation in C programming\n");
    /*What is Dynamic memory allocation in C programming.
        *-> Dynamic memory allocation is a way in wwhich the size of a data structure can be changed during the runtime.
    Why is Dynamic memory allocation in C programming.
        *-> A statically variable or array has a fixed size in memory.
        *-> we have learnt to create big enough arrays to fit in our inputs but this doesn't seem like an optimal way to allocate memory.
        *-> Memory is a useful resource.
        *-> Clearly we need a way to request memory on runtime.
    Static Vs Dynamic Memory Allocation in C programming.
        *Static memory allocation*        |       *Dynamic memory allocation*
         -> Allocation is done befor the  |       -> Allocation is done during the 
         program's execution.             |         program's execution.
         -> There is no memory            |       -> There is memory reuability and 
         reusability and the memory       |         the allocated memory can be freed 
         allocated connot be feed.        |         when not required.
         -> Less efficient.               |       -> More efficient.

    Memory allocation in C programming.
        * Memory assigned to a program in a typical architechture can to broken down into four segments:
            *-> code
                -> It is called text segment.
            *-> static/global variables
                -> It has two segment:
                    -> i-> data segment - It is used to (initialized segment).
                    -> ii-> BSS segment - It is used to (Uninitialized segment).
                        -> BSS stands for - Block Started by Symbol.
            *-> Stack
                -> It follows LIFO rule - It means Last In First Out.
            *-> heap
    Functions for Dynamic memory allocation in C programming.
        *-> malloc()
            *-> malloc() - stands for Memory Allocation.
            *-> It reserves a block of memory with the given amount of bytes.
            *-> The return value is a void pointer to the allocated space.
            *-> Therefore the void pointer needs to be casted to the appropriate type as per the requirements.
            *-> However, if the space is insufficient, allocation of memory fails and it return a NULL pointer.
            *-> All the values at allocated memory are initialized to garbage values.
                *Syntax: Ptr= (ptr_type*) malloc(3* sizeof(data_type));
        *-> calloc()
            *-> calloc() - stands for Contiguous Allocation.
            *-> It reserves N blocks of memory with the given amount of bytes.
            *-> The return value is a void pointer to the allocated space.
            *-> Therefore the void pointer needs to be casted to the approprite type as per the requirements.
            *-> However, if the space is insufficient, allocation of memory fails and it returns a NULL pointer.
            *-> All the value at allocated memory are initialized to 0 importand point.
                *Syntax: ptr= (ptr_type*) calloc(n, size(data_type));
        *-> realloc()
            *-> realloc() - stands for Reallocation.
            *-> if the dynamically allocation memory is insufficient we can change the size of previously allocated memory using realloc() function.
                *Syntax: ptr= (ptr_type*) realloc(ptr, new_sizeof(data_type));
        *-> free()
            *-> free() is used to free the allocated memory.
            *-> if the dynamically allocated memory is not required anymore. we can free it using free function.
            *-> this will free the memory being used by the program in the heap.
                *Syntax: free(ptr);
    //Dynamic Memory Allocation function declaration contains #include"stdlib.h" - header file.
    */
    //Let's code to understand all about DMA.
    
    //I will discuss more about DMA and it's functions. ............ in another files.
    
    //getch();
    return(0);
}