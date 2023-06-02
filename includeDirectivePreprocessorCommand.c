//Write a program to use #include Directive preprocessor cammand in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"Temp.c"//Here i have added Temp.c file by using #include directive preprocessor command in C.
int main(){
    printf("#include Directive preprocessor cammand in C programming\n");
    /* What is #include Directice preprocessor command in C Porgamming ?
        *-> The #include directive causes the preprocessor to fetch the contents of some other files to be included in the present file.
        *-> This file may in turn #include some other files(s) which may in turn do the same.
        *-> Most commonly the #included files have a ".h" extension, indicating that they are header files.
    
    Two comman #include formats.
        *-> In C programming there are two common formats for #includes:
            *-> #include <headerFile.h> //The angle brackets say to look in the standard system direcories.
            *-> #include "myFile.h" //The quotation marks say to look in the current direcotry.
        *-> Disk drive full path is allowed, but discouraged since it is not portable.
            *-> #include <C:\Program Files\Ritik\Coder\someFile.h> //Too specific.
            *-> #include <Sys/File.h> //Relative and portable path to the standard locations.
        
    Let's some code to know all about #include Directive preprocessor command in C.
    */

    int a= fun1();
    printf("The value of a is : %d\n", a);
    fun2();
    
    //getch();
    return(0);
}