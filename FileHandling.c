//Write a program to Use File input output in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("File input output in C programming\n");
    /*What is File in C programming ?
        *-> File is a Collection of information.
    
    Why do we need a file ?
        *-> Files are used to store data and information.
        *-> Files are used to read & access data anytime from the hard disk.
        *-> Files make it easy for a programmer to access and store content without losing it on program termination.
    
    Why do we nedd file in other words ?
        *-> When a C program is terminated, the data stored in RAM is lost.
        *-> Storing in a file will preserved our data even after the program terminates.
        *-> RAM is not able to handle quite large amount of data due to it's small size relative tothe hard disk.
        *-> It is easy to transfer data as files.

    What is data ?
        *-> data is bits of storage.
    What is information ?
        *-> whenn be process this data to create something meaning ful when we called it information.

    There are two types of Memroy in C programming.
        1-> Volatile memroy.
        2-> Non-Volatile memory.
    
    What is Volatile memory ?
        *-> Volatile memory is computer storage that only maintains it's data while device is powered.
        *-> The RAM will hold data, programs, and information as long as it has a constand power supply but immediately the power is interrupted all that content is cleared.
        *-> The volatile memory will only hold data temporarily.
        *-> RAM is the main example of volatile memroy.
    
    What is Non_volatile memory ?
        *-> Non-Volatile memory is computer memory that can retain the stored information even when not powered.
        *-> This type of memory is also referred to as permanent memory since data stored wothin it can be retrieved even when there is no constand power supply.
        *-> It is ued for the long-term storage of data.
        *-> SSD is the main example of Non-volatile memroy.
    
    Types of file.
        *Ther are two types of file.
            *-> Text files.
                *-> This type of file's data is in a plain text form and easily readable form.
            *-> Binary files.
                *-> This type of File's data is in a form of Binary it maeans in the form of 0's and 1's.

    File Operation in C programming.
        *In C we can perform these high lavel operations on files:
            *-> Creating a new file.
            *-> Opening a file.
            *-> Closing a file.
            *-> Reading from and writing to a file.

    Working with files in C
        *-> When working with files, we have to declare a pointer of type FILE>
            *-> syntax is : FILE *ptr= NULL.
        *-> This declaration helps us to work with files though C program.

    Function of File handling in C programming.
        *-> Mode of file handling in C.
            *-> r mode.
                *-> Opens an existing text file for reading.
            *-> w mode.
                *-> Opens a file for writing. if it doesn't exist, then a new file is created. writing starts for the begining of the file.
            *-> a mode.
                *-> Opens a text file for writing in appending mode. It it does not exist, then a new file is created. The program will start appending contednt to the existing file content.
            *-> r+ mode.
                *-> This mode will open a text file for both reading and writing.
            *-> w+ mode.
                *-> Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, othersize creates a file if it does not exist.
            *-> a+ mode.
                *-> Opens a text file for both reading and wirting. It creates the file if it does not exist. The reading will start from the begining but writing can only oppend to file.

        *-> Opeing a file.
            *-> Stdio.h header files contains a function called fopen() for opening file in C.
                *-> The syntax for opening a file in standard I/O is:
                    *-> ptr= fopen("File_name.extension", "mode");
                *-> For example : fopen("E:\\Ritik\\Coder.txt", "w");
                *-> For example : fopen("E:\\Ritik\\programmer\\Coder.binary", "rb");
        *-> Closing a file.
            *-> Any file which is opened in a C program needs to be closed.
            *-> Closing a file is accomplished by the library function fclose()
            *-> fclose(fptr); // fptr is the file pointe associated with file to be closed.
        *-> Reading a FILE.
            *-> In order ot read a file, we can use fscanf() function.
            *-> This function is file version of scanf function.
            *-> fscanf expects a file pointer in addition to the otherarguments which scanf expects.
            *-> We will have to open the file in read mode in order to use this funtion.
                *-> Syntax : .........
        *-> Witing to a FILE.
            *-> In order to write to a file, we can use fprintf() function.
            *-> This function is file version of printf function.
            *-> fprintf expects a file pointer in addition to the other arguments which printf expects.
            *-> We will have to open the file in write mode in order to use this function.
                *-> Syntax : fprintf(ptr, "%s", string);
        *-> Other FILE I/O functions in C.
            *-> Ther are various functions provided by C standard library to read and wirte a file, character by character, or in the form of a fixed length string.
                *-> Some of them are:
                    *-> fputc - To character.
                    *-> fputs - To string.
                    *-> fgetc - To character.
                    *-> fgets - To string.

    Let's some code to know all about File handling in C.
    */
    FILE *ptr= NULL;

    //*Reading a file.
    char string[40];
    ptr= fopen("myFile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The conted of this file has : %s\n", string);

    //*Writing a file.
    // char string[40]= "This is RitikCoder speaking.";
    // ptr= fopen("myFile.txt", "w");
    // fprintf(ptr, "%s", string);
    // printf("Data inserted successfully into myFile.txt file.");

    
    //getch();
    return(0);
}