//Write a program to Print Nth term of Fib series using Recursion with RitikCoder.
#include"stdio.h"
#include"conio.h"
int fibRecursion(int);//function declaration.
int main(){
    printf("Fib series using Recursion in C programming\n");
    int n;
    printf("Enter Nth number : ");
    scanf("%d", &n);
    printf("The nth term of fib series is : %d", fibRecursion(n));
    
    //getch();
    return(0);
}
int fibRecursion(int n){
    if(n== 1 || n== 2){
        return (n- 1);
    }else{
        return (fibRecursion(n- 1)+ fibRecursion(n- 2));
    }
}