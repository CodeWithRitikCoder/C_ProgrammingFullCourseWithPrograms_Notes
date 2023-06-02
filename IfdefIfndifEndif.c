//Write a program to #ifdef, #ifndef, #endif preprocessor directive in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#define A 5
int main(){
    printf("#ifdef, #ifndef, #endif preprocessor directive in C programming\n");
    #ifdef A
    printf("Hello, I am defined.\n");
    printf("The value of A is : %d\n", A);
    #endif
    #ifndef A
    printf("Hello, I am not defined\n");
    printf("Bye");
    #endif
    #ifndef B
    printf("Hii, My name is B\n");
    printf("And I am not defined.\n");
    #endif
    
    //getch();
    return(0);
}