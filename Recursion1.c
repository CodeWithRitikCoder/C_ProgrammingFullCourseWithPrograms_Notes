//Write a program to use Recursion in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int fact_Recursion(int);//function prototype.
int main(){
    printf("Recursion in C programming\n");
    /*What is Recursive function in C programming.
    * Recursive function or Recursion is a process when a function call a copy of itself to work on a smaller problem.
    * any function which calls itself is called recursive function.
    * this take the life of programmer easy by dividing a given porblem into easier.
    * A termination condition is imposed on such functions to stop them executing copies of themseleves forver.
    * the case at which the function doesn't recur is called base case.
    * and remember one thing that is - if any problem that can be solved recursively. can alos be solved iteratively.
    in c programming language.
    for example:- Tower of hanoi, Factorial finding, Fibonacci series, and so on......
    */
    //Let's code to find factorial of N number using Recursion.
    //I have created this Recursive function out of main function.
    int n;
    printf("Enter a number to find factorial of : ");
    scanf("%d", &n);
    int a= fact_Recursion(n);
    printf("The factoral of %d is : %d\n", n, a);

    //getch();
    return(0);
}

//Factorial finding of N number Recursive function.
int fact_Recursion(int n){
    if(n== 0 || n== 1){
        return (1);
    }else{
        return (n* fact_Recursion(n- 1));
    }
}