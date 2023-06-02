//Write a program to use void pointer in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Void pointer in C programming\n");
    int a= 5;
    void *ptr= &a;
    printf("The value of a is : %d\n", a);
    printf("The value of a is using pointer : %d\n", *(int*)ptr);
    printf("The address of a is : %d\n", &a);
    printf("The address of a is : %d\n", ptr);
    
    //getch();
    return(0);
}