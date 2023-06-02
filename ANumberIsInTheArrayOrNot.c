//Write a program to ------------ with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("To Checking a number is present or not in the array C programming\n");
    int arr[]= {12, 14, 16, 18, 20};
    int a=200, b= 0;
    for(int i= 0; i<= 4; i++){
        if(a== arr[i]){
            printf("Number is Present in the array.");
            break;
        }else{
            b++;
        }
    }
    if(b== 5){
        printf("Number is not present in the array.");
    }
    
    //getch();
    return(0);
}