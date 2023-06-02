//Write a program to Use Function in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
void tnRn(void);//function declaration or prototype.
int tnRs(void);//function declaration or prototype.
void tsRn(int n);//function declaration or prototype.
int tsRs(int n);//function declaration or prototype.
int main(){
    printf("Function in C programming\n");
    /*There are two type of functions in C programming.
    1. -> Pre-defined function Or Library function.
    2. -> User defined function.
    and function is used to divide a large C program into smaller pieces.
    and A function can be called mulitple times to provide reusability and modularity to the C program.
    and we can avoid rewriting same logic through functions.
    and we cand divide work among programmers using functions.
    we can easily debug a program using functions.
    -> Pre-defined functions are already declared into the header files.
    -> User defined functions are created by programmers.
    and a function have three things.
    which is (i)-> function Declaration.
             (ii)-> function call.
             (iii)-> function definition.

    2. -> used defined functionns have four types of natures.
        1. -> Take nothing and Return nothing.
        2. -> Take nothing and Return something.
        3. -> Take something and Return nothing.
        4. -> Take something and Return something.
    */
    //Let's code all these function. in C programs.
    
    tnRn();//function call.
    int n= tnRs();//function call.
    printf("I have recieved : %d\n", n);
    tsRn(3);//function call and this passing value is called actual arguments.
    int m= tsRs(3);//function call.
    printf("I have recieved : %d\n", m);

    
    //getch();
    return(0);
}

//1. -> Takce nothing and Return nothing.
    void tnRn(void){
        printf("Function to Take nothing and Return nothing.\n");
    }
//2. -> Takce nothing and Return something.
    int tnRs(void){
        printf("Function to Take nothing and Return something.\n");
        return (1);
    }
//3. -> Takce something and Return nothing.
    void tsRn(int n){//and this receving value is called formal parameters.
        printf("Function to Take something and Return nothing.\n");
        printf("and I got : %d\n", n);
    }
//4. -> Takce something and Return something.
    int tsRs(int n){//and this receving value is called formal parameters.
        printf("Function to Take something and Return something.\n");
        printf("and I got : %d\n", n);
        return (1);
    }