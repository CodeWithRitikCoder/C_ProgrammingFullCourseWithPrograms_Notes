//Write a program to pointer arithmetic in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Array and pointer arithmetic in C programming\n");
    /*There are four arithmetic operator that can be used on pointers.
        * ++, --, +, -  -- These operators we will use on pointer arithmetic.
        >*/
        int a= 2, *ptr;
        ptr= &a;
        printf("ptr contains this : %d\n", ptr);
        ptr++;//this will increase the a block of int type not one value in pointer.
        printf("ptr contains this after ptr++ : %d\n", ptr);
        ptr+= 1;
        printf("ptr contains this after ptr+= 1 : %d\n", ptr);
        ptr--;//this will increase the a block of int type not one value in pointer.
        printf("ptr contains this after ptr-- : %d\n", ptr);
        ptr-= 1;
        printf("ptr contains this after ptr-= 1 : %d\n", ptr);
        printf("ptr contains this after ptr+ 1 : %d\n", ptr+ 1);
        printf("ptr contains this after ptr++ : %d\n", ptr++);
        printf("ptr contains this after ptr- 1 : %d\n", ptr- 1);
        printf("ptr contains this after ptr-- : %d\n", ptr--);
        //That's all about pointer arithmetic in C programming language.
    
    //getch();
    return(0);
}