//Write a program to Data writing into the file by using three methods in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"string.h"
int main(){
    printf("Data inserting into the file in C programming\n");
    FILE *fptr= NULL;
    fptr= fopen("myFile.txt", "w");
    if(fptr== NULL){
        printf("Some error find.");
        //exit(1);
    }else{
        //First way to write data into the file an this way is usde to write one by one character at a time into the file.
        /*char string[]= "My name is RitikCoder";
        for(int i= 0; i< strlen(string); i++){
            fputc(string[i], fptr);
        }*/
        
        //Second way to write data into the file and this way is used to write whole string at a time into the file.
        /*char string1[]= "I am form Atrauli";
        fputs(string1, fptr);
    }*/

        //Third way to write data into the file and this wasy is used to write any type of value into the file at a time.
        int a= 5;
        float f= 44.3;
        char string2[]= "I am a Coder";
        fprintf(fptr, "%d %s %0.2f", a, string2, f);
    }
    fclose(fptr);
    
    //getch();
    return(0);
}