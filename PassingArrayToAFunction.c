//Write a program to Passing Array to a function in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
void fun1(int arr[]);
void fun2(int *);
int main(){
    printf("Passing Array to a function in C programming\n");
    /*why and how to pass array to a function in C programming.
        * We pass arrays to a function when we need to pass a list of values to a given function.
        * We can pass the arrays to a function.
            * By declaring array as a parameter in the function.
            * By declaring a pointer in the function to hold the base address of the array.
            * */
    int arr[4]= {87, 99, 97, 96};
    // for(int i= 0; i<= 3; i++){
    //     printf("%d\n", arr[i]);
    // }
    printf("By passing array as a parameter.\n");
    fun1(arr);//function call.
    printf("By passing as a pointer.\n");
    fun2(arr);//function call.
    printf("\n%d", arr[1]);
    
    //getch();
    return(0);
}
//function definitions.
//By declaring array as a parameter in the function.
void fun1(int arr[]){
    for(int i= 0; i<= 3; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    //arr[0]= 233; //very important point that if we will change any value here in array, it gets reflected in to the main array.
}
//By declaring a pointer in the function to hold the base address of the array.
void fun2(int *ptr){
    for(int i= 0; i<= 3; i++){
        printf("%d, ", *(ptr+ i));
        // printf("%d, ", ptr[i]);//This will print as same value as unpper line print.
    }
    *(ptr+ 1)= 233; //very important point that if we will change any value here in array, it gets reflected in to the main array
}