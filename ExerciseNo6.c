//Write a program to solve Exercise No.6 with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"string.h"

//String parse function is here.
void funStringParse(char *string){
    int in= 0;//variable to track whether we are inside the tag.
    int index= 0;
    for(int i= 0; i< strlen(string); i++){
        if(string[i]== '<'){
            in= 1;
            continue;
        }else if(string[i]== '>'){
            in= 0;
            continue;
        }
        if(in== 0){
            string[index]= string[i];
            index+= 1;
        }
    }
    string[index]= '\0';

    //Removing the trailing spaces from the beginning.
    while(string[0]== ' '){
        //shift the string to the left.
        for(int i= 0; i< strlen(string); i++){
            string[i]= string[i+ 1];
        }
    }

    //Removing the trailing spaces from the ending.
    while(string[strlen(string)- 1]== ' '){
        //shift the string to the left.
        string[strlen(string)- 1]= '\0';
        }
    }

int main(){
    printf("Solution of Exercise No.6 in C programming\n");
    /*write a program to Print HTML parse.
        *-> Like "<h1> This is my heading <h1>" this to "This is my heading"
    Let's code to solve this Exercise No.6 in C programming.
    */
    char string1[]= "<h1>            This is my heading        <h1>";
    printf("String1 is befor parse : %s\n", string1);
    funStringParse(string1);//function call by reference with actual arguments.
    printf("String1 is after parsed : ~%s~\n", string1);

    //that's all about Exercise- 6.

    //getch();
    return(0);
}