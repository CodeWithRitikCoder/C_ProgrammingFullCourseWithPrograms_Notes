//Write a program to use all Assignment operators in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Assignment operators in C programming\n");
    int a, b= 5;
    //Assignment operators are :- (=, +=, -=, *=, /=)'
    a= 5;
    printf("1. A = : %d\n", a);
    b+= a;
    printf("2. B += : %d\n", b);
    b-= 2;
    printf("3. B -= : %d\n", b);
    a*= b;
    printf("4. A *= : %d\n", a);
    a/= 4;
    printf("5. A /= : %d\n", a);
    //These all are my Assignment operators in C programming.
    
    //getch();
    return(0);
}