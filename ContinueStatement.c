//Write a program to Continue statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Continue statement in C programming\n");
    /*continue statement is used to only for skip something when your given condition will be true.*/
    for(int i= 1; i<= 5; i++){
        if(i== 3){
            continue;
        }
        printf("The value of I is :- %d\n", i);
    }
    //That's the use of Continue statements in C programming.
    
    //getch();
    return(0);
}