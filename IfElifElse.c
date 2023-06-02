//Write a program to use #if, #elif, #else, #endif preprocessor directive in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#define a 12
int main(){
    printf("#if, #elif, #else, #endif preprocessor directive in C programming\n");
    
    #if a== 10
    printf("Hii, I am 10");
    #elif a== 12
    printf("Hii, I am 12");
    #else
    printf("No one isn't match");
    #endif
    
    //getch();
    return(0);
}