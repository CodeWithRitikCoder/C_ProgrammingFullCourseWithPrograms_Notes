//Write a program to Nested If else statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("if else if ladder statement in C programming\n");
    int age, class;
    printf("Enter your age to get job offer : ");
    scanf("%d", &age);
    if(age>= 18 && age<= 40){
        printf("which class have you done : ");
        scanf("%d", &class);
        if(class== 12 || class== 10){
            printf("Your can get job offer.");
        }else{
            printf("Your can't get job offer.");
        }
    }else{
        printf("your age is not enough for this job offer.");
    }

    //That's all about Nested if else statement in C programming.
    
    //getch();
    return(0);
}