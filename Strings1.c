//Write a program to Strings in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Strings in C programming\n");
    /*Q-> Is String a data type in C programming.
      A-> No string is not a data type in C programming.
    some important points of String in C programming.
        * C language does not support strings as a data type.
        * we have char, int, float and other data types byt no 'String' data type in C
        * String is not a supported data type in C but it is a very useful concept used to model real world entities like name, city etc.
        * we express string using an array of characters terminated by a NULL character ('\0')
        * string is an array of characters which is terminated by the NULL character.
        * String in C is created by creating an array of characters.
        * we need an extra character ('\n' or NULL character) to tell the compiler that the string ends here.
    creating string in C.
        * We can create a character array in the following ways.
            * char name[]= {'R', 'i', 't', 'i', 'k', '\0'};
            * char name[]= "your_String";//here we have no need to assign null character in this case.
            */
    
    //String creation by using first method in C.
    char name[]= {'R', 'i', 't', 'i', 'k', '\0'};
    printf("String creation using first method : ");
    for(int i= 0; i<= name[i]!= '\0'; i++){
        printf("%c", name[i]);
    }

    //String creation by using Second method in C.
    char name1[]= "Ritik Coder";
    printf("\nString creation using second method : %s\n", name1);
    //Get string by the user.
    char name2[20];
    printf("Enter your name here : ");
    gets(name2);//This is used to get string with white space.
    printf("This is your entered string : %s\n", name2);
    printf("Print string using puts function : ");
    puts(name2);
    
    //getch();
    return(0);
}