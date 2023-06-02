//Write a program to Dynamic Allocation with Calloc function in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"//It contains decalaration of DMA Functions.
int main(){
    printf("Dynamic Allocation with Calloc function in C programming\n");
    int n, *ptr;
    printf("Enter the sizeof of your Dynamic array to create : ");
    scanf("%d", &n);
    ptr= (int *) calloc(n, sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value at %d is : ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i= 0; i< n; i++){
        printf("The value at index of %d is : %d\n", i, ptr[i]);
    }
    free(ptr);
    //That's all about DMA_wiht calloc memory allocation.
    
    //getch();
    return(0);
}