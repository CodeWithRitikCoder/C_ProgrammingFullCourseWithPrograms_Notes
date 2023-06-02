//Write a program to Typecasting in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Typecasting in C programming\n");
    /*Type casting -> typecasting is used to type cast one data type value to another type value.
    for Example:
    let's suppose we have a float a variable which contains 6.44. and we want to store it into the int b then
    we will have to type cast float data type to int. then we can store it into a variable.
    ex- > float a= 6.44;
          int b= (int) a;
    */
    int a= 4;
    float b= 54/5;
    printf("The value of b is :- %0.3f\n", b);
    b= (float) 54/5;
    printf("Now the value of b is :- %0.3f\n", b);
    //That's all about type casting in C programming.
    
    //getch();
    return(0);
}