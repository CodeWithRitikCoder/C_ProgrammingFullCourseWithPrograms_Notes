//Write a program to Switch case statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Switch case statement in C programming\n");
    /*Some Rules while using switch case.
    1. -> switch expression must be an int or char.
    2. -> case value must be and integer or a character.
    3. -> case must come inside the switch.
    */
    int age;
    printf("Enter your age here : ");
    scanf("%d", &age);
    switch(age){
        case 18: {
            printf("You are 18 year old");
            break;
        }
        case 20: {
            printf("You are 20 year old");
            break;
        }
        case 25: {
            printf("You are 25 year old");
            break;
        }
        case 30: {
            printf("You are 20 year old");
            break;
        }
        default : {
            printf("You are not in my list.");
            break;//break keyword is not maindatory inside of default case.
        }
    }
    //That's all about switch case statement in C programming.
    
    //getch();
    return(0);
}