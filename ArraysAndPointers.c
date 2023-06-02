//Write a program to Arrays and Pointers in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Arrays and Pointers in C programming\n");
    /*Consider the following array declaration:- int arr[10];
    */
   int arr[3]= {3, 4, 2};
   //arr -> has it's arr[0]'s block address.
   int *ptr= arr;
   //These are the value of arr.
   printf("The value of arr[0] is : %d\n", *ptr);
   printf("The value of arr[1] is : %d\n", *(ptr+ 1));
   printf("The value of arr[2] is : %d\n", *(ptr+ 2));
   //These are the address of arr indexes using &arr.
   printf("The address of first element of the array is : %d\n", &arr[0]);
   printf("The address of first element of the array is : %d\n", arr);
   printf("The address of second element of the array is : %d\n", &arr[1]);
   printf("The address of second element of the array is : %d\n", arr+ 1);

   //These are the values of arr indexes using *ptr and arr[index].
   printf("The value at address of first element of the arr is : %d\n", *(&arr[0]));
   printf("The value at address of first element of the arr is : %d\n", arr[0]);
   printf("The value at address of second element of the arr is : %d\n", *(&arr[1]));
   printf("The value at address of second element of the arr is : %d\n", arr[1]);

   //These are the address of arr indexes using ptr.
   printf("The address of first element of the array is : %d\n", ptr);
   printf("The address of second element of the array is : %d\n", ptr+ 1);

   //These are the values of arr indexes using ptr, *ptr.
   printf("The value at address of first element of the arr is : %d\n", *ptr);
   printf("The value at address of second element of the arr is : %d\n", *(ptr+ 1));

   //That's all about Arrays and pointers in C programming.
    
    //getch();
    
    return(0);
}

int fun(int a, int b){//This is foraml parameters
    //code to be execute.
    return (0);
}
