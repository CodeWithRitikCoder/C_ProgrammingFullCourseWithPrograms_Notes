//Write a program to Constrants in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#define PI 3.14
int main(){
    printf("Constrants in C programming\n");
    /*There are two ways to define constants in C programming.
    1. by the (const) keyword.
    2. by the (#define) pre-processor and this will never terminate with the semi colon (;).
    */
    int a= 5;
    const int b= 15;
    //We can't change constant variables in C
    //way no. 1
    printf("1. The value of A is : %d\n", a);
    printf("2. The value of B is : %d\n", b);
    a= 20;
    printf("3. Now the value of A is : %d\n", a);
    //b= 21;//because B is constant so this will through an errro if we change.
    // printf("4. Now the value of B is : %d\n", b);

    //way no. 2
    printf("5. The value of PI is : %0.2f\n", PI);
    // PI= 7.22;//because PI is constant so this will through an errro if we change.
    // printf("6. Now the value of PI is : %f\n", PI);
    
    //getch();
    return(0);
}