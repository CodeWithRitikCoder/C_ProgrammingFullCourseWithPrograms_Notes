//Write a program to use #undef in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#define A 23
int main(){
    printf("Use of undef in C programming\n");
    printf("The value of A is : %d\n", A);
    #undef A
    //if we will execute this line this will through an error because of A is undefined here.
    // printf("Now the value of A is : %d\n", A);

    //getch();
    return(0);
}