//Write a program to Use Typedef keyword in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Typedef keyword in C programming\n");
    /*What is typedef in C programming.
    typedef is a keyword in C programming.
    and it is used to create alternative name of existing data types.
    Syntex of typedef keyword is:
        -> typedef <previour_name> <alias_name>
    
    Let's code to know all about typedef keyword in C programming.
    */
    typedef int in;
    in a;//here the means of in as same as the int.
     a= 29;
    printf("This is the value of a : %d", a);
    
    //getch();
    return(0);
}