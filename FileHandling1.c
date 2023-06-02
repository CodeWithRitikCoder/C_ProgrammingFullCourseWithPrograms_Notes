//Write a program to Create a file and Writing data into the file in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Creating a file and writing a data in C programming\n");
    FILE *ptr= NULL;
        ptr= fopen("MyFile1.txt", "w");
    if(ptr== NULL){
        printf("File isn't open becuse of some error.");
    }else{
        printf("File has been opened successfully.\n");
        char arr[]= "My_name_is_RitikCoder.\n";
        fprintf(ptr, arr);
        int rollno= 18;
        fprintf(ptr, "Roll no.- %d\n", rollno);
        //fputs(arr, ptr); //we can use both function to write data into the file.
        printf("Data has been inserted successfully into the file.");
    }
    fclose(ptr);
    
    //getch();
    return(0);
}