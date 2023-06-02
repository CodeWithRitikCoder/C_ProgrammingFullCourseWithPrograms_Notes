//Write a program to Goto statement in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Goto statement in C programming\n");
    /*Goto statement -> Goto statement is also called jump statement in C programming.
    and it is used to transfer program control to a predefined label in C.
    Goto statement is preferable when we need to break mulitple loops using a single statement at  the same time.
    */
    for(int i= 0; i<= 10; i++){
        if(i== 5){
            goto end;
        }else{
            printf("The value of I is :- %d\n", i);
        }
    }
    end:
    //That's the use of goto statement in C programming.
    
    //getch();
    return(0);
}