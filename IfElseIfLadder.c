//Write a program to If else if ladder statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("if else if ladder statement in C programming\n");
    int age;
    printf("Enter your age here : ");
    scanf("%d", &age);
    if(age>= 18 && age<= 50){
        printf("You can drive.");
    }else if(age>= 51){
        printf("You are out of age.");
    }else{
        printf("you can't drive.");
    }
    //That's all about if else if ladder statement in C programming.
    
    //getch();
    return(0);
}