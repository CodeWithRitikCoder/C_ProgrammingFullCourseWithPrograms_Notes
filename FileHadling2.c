//Write a program to open a file and reading data from the file in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("open a file and reading data in C programming\n");
    FILE *ptr= NULL;
        ptr= fopen("MyFile1.txt", "r");
    if(ptr== NULL){
        printf("File isn't open becuse of some error.");
    }else{
        printf("File has been open successfully\n");
        char arr[50];
        fscanf(ptr, "%s", arr);
        printf(arr);
        //printf("%s", arr);//We can also read data like this
    }
    fclose(ptr);
    
    //getch();
    return(0);
}