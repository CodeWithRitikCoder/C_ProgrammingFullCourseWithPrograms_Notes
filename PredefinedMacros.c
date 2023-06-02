//Write a program to use predefined macros in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("predefined macros in C programming\n");
    /*What is predefined macros ?
        *-> Predefined is a predeinfed macros in C programming language.
    
    There are following Macros in C programming.
        1-> __FILE__ -> It gives The Current file name as a string literal.
        2-> __DATE__ -> It gives The current data as character literal in "MM DD YYYY" format.
        3-> __TIME__ -> It gives The current time as a character literal in "HH:MM:SS" format.
        4-> __LINE__ -> It gives The current line number as a decimal constant.
        5-> __STDC__ -> Defined as 1(one) when the compiler compiles with the ANSI standard.

    Let's some code to know all about the predefined macros in C.
    */
    printf("Current File name is : %s\n", __FILE__);
    printf("Todays Date is : %s\n", __DATE__);
    printf("Current Time Now is %s\n", __TIME__);
    printf("Current Line No is %d\n", __LINE__);
    printf("ANSI : %d\n", __STDC__);
    
    //getch();
    return(0);
}