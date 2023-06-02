//Write a program to use ## with #define in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#define Action(a, b) a## b+ a* b
#define Action1(a, b)a## b
int main(){
    printf("## with #define in C programming\n");
    printf("The answer is : %d\n", Action(2, 4));
    printf("The Concadinate value is : %d\n", Action1(5, 6));
    
    //getch();
    return(0);
}