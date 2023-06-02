//Write a program to Break statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Break statement in C programming\n");
    /*Break statement is used to only for break a statement when your given condition will be true.*/
    for(int i= 1; i<= 5; i++){
        if(i== 4){
            break;
        }
        if(i== 2){
            continue;
        }
        printf("The value of I is :- %d\n", i);
    }
    //That's the use of Break statements in C programming.
    
    //getch();
    return(0);
}