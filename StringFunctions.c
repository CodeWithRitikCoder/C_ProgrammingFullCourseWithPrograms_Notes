//Write a program to Use String functions in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"string.h"
int main(){
    printf("String Functions in C programming\n");
    /*we will have to add "string.h" header file to use string function in C proramming.
        C-> Library: "String.h"
    String functions are as follows.
        functions   |   Use
        * Strcat()  |   This function is used to concatenate or combine two given strings.
        * strlen()  |   This function is used to show lenth of a string.
        * strrev()  |   This function is used to show reverse of a string.
        * strcpy()  |   This function is used to copy one string into another.
        * strcmp()  |   This function is used to compare tow given string.
    These all are the function of string in C programming language.
    and declaration of these functions is in the "string.h" header file.
    */
    char string1[]= "Ritik";
    char string2[]= "Coder";
    printf("This is my first Stirng : %s\n", string1);
    printf("This is my second Stirng : %s\n", string2);
    printf("combine of two string is : %s\n", strcat(string1, string2));
    printf("length of our string is : %d\n", strlen(string1));
    printf("This is our reverse string : %s\n", strrev(string1));
    char string3[20];
    printf("This is our copied string2 into string3 : %s\n", strcpy(string3, string2));
    //if string is matched this will return-> 0
    //if string isn't matched this will return-> 1
    //Other wise this will return-> -1
    printf("This is the compare string1 to string2 : %d\n", strcmp(string3, string2));

    //getch();
    return(0);
}