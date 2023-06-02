//Write a program to Solve Exercise No.1 with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    /*Print multiplication table of a number entered by the user in pretty form.
    Example:
    Enter the number you want multiplication table of : <Let's suppose user entered 6 here>
    output:
    Table of 6:
    6 X 1 = 6
    6 X 2 = 12
    6 X 3 = 18
    .
    .
    .
    6 X 10 = 60
    */
    
    //Solution of Exercise NO.1
    printf("Solution of Exercise No.1 in C programming\n");
    int n;
    printf("Enter the number you want multiplication table of : ");
    scanf("%d", &n);
    printf("%d X 1 = %d\n", n, (n*1));
    printf("%d X 2 = %d\n", n, (n*2));
    printf("%d X 3 = %d\n", n, (n*3));
    printf("%d X 4 = %d\n", n, (n*4));
    printf("%d X 5 = %d\n", n, (n*5));
    printf("%d X 6 = %d\n", n, (n*6));
    printf("%d X 7 = %d\n", n, (n*7));
    printf("%d X 8 = %d\n", n, (n*8));
    printf("%d X 9 = %d\n", n, (n*9));
    printf("%d X 10 = %d\n", n, (n*10));
    //Here I solved my Exercse No.1 in C programming.
    
    //getch();
    return(0);
}