//Write a program to solve Exercise No.8 with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
int main(){
    printf("Solution of Exercise No.8 in C programming\n");
    /*Write a program to Dynamic Memory Allocation.
        Let's suppose.-> ABC pvt Ltd: manages employee records of other companies.
        Employee id can be of any length and it can contian any character
        For 3 employees, you have to take length of employee id in a lenth integer variable.
        Then, you have to take employee id as an input and display on the screen.
        Store the employee id in a character array which is allocated dynamically.
        you have to create only one character array dynamically

    Let's code to solve this Exercise No.8 in C programming.
    */
    //Code to be solve Exercise no. 8 in C programming.
    int size, i= 0;
    while(i<= 2){
        printf("Employee- %d: Enter the number of characters in your Employee id : ", i+ 1);
        scanf("%d", &size);
        char *ptr= (char*) malloc((size+ 1)* sizeof(char));
        printf("Enter the id of %d employee : ", i+ 1);
        scanf("%s", ptr);
        printf("The id of employee %d is : %s\n\n", (i+ 1), ptr);
        free(ptr);
        i+= 1;
    }

    //that's all about Exercise- 8.

    //getch();
    return(0);
}