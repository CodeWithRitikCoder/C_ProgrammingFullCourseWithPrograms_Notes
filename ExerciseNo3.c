//Write a program to solve Exercise No.3 with RitikCoder.
#include"stdio.h"
#include"conio.h"
int fib_iterative(int);//function declaration.
int fibRecursion(int);//function prototype.
int main(){
    printf("Solution of Exercise No.3 in C programming\n");
    /*Print the Fibonacci series at Nth term by using Recursive approach and as well as iterative approach.
    Let's code to solve this Exercise No.3 in C programming.
    */
    int n;
    printf("Enter a number to Nth term to get Fib series :- ");
    scanf("%d", &n);

    //1. -> using iterative approach.
    printf("The Fibonacci series at position %d is using Iteration : %d\n", n, fib_iterative(n));
    //1. -> using Recursive approach.
    printf("The Fibonacci series at position %d is using Recursion : %d\n", n, fibRecursion(n));

    //that's all about Exercise- 3.

    //getch();
    return(0);
}


//Fib_Recursive function defintion is here.
int fib_iterative(int n){
    int a= 0, b= 1;
    if(n== 1 || n== 2){
            return (n- 1);
        }else{
        for(int i= 0; i< n- 1; i++){
            b= a+ b;
            a= b- a;
        }
        return (a);
    }
}
//Fib_Recursive function defintion is here.
int fibRecursion(int n){
    if(n== 1 || n== 2){
        return (n- 1);
    }else{
        return (fibRecursion(n- 1)+ fibRecursion(n- 2));
    }
}