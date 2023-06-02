//Write a program to Use #define Directive Preprocessor command in C with RitikCoder.
#include<stdio.h>
#include"conio.h"
#define a 15 //This is our preprocessor variable creation.
#define PI 3.14
#define SQUARE(r) r*r
int main(){
    printf("#define Directive Preprocessor command in C programming\n");
    /*What is #define Directive preprocessor command in C programming ?
        *-> The #define directive is used to "define" preprocessor "Variables"
        *-> The #define preprocessor directive can be used to globally replace a word with a number.
        *-> It acts as if an editor did a global search-and-replace edit of the file.

    usng #define for Debugging.
        *-> #define directive can be used for debugging.
        *-> We can have printing statements that we only want active when debugging.
        *-> We can "protect" then in a "ifdef" block as follows:

    Macro Using #define.
        *-> We can also create macros using #define.
        *-> Macros aperate much like functions, but because they are expanded in place and are generally faster.

    Let's some code to know more about #define directive preprocessor caommand in C.
    */
    int b= a;
    printf("The value of a is : %d\n", a);
    printf("The value of a is : %d\n", b);
    // #undef a; //Here I have been Undefine defined a preprocessor directive by using #undef.s
    // printf("The value of a is : %d\n", a);
    int r= 4;
    printf("The area of this circle is %f\n", PI *SQUARE(r));

    
    //getch();
    return(0);
}