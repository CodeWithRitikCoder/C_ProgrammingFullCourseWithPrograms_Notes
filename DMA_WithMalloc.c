//Write a program to Dynamic Memory allocation using Mallco function. with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"//It contains decalaration of DMA Functions.
int main(){
    printf("Dynamic Memory allocation using Mallco function in C programming\n");
    //Use of malloc.
    int *ptr, n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    ptr= (int*) malloc(n* sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value no %d of this array : ", i);
        scanf("%d", &ptr[i]);
    }
    
    for(int i= 0; i< n; i++){
        printf("The value at %d of this array is : %d\n", i, ptr[i]);
    }
    free(ptr);
    //That's all about DMA_wiht Malloc memory allocation.

    //getch();
    return(0);
}