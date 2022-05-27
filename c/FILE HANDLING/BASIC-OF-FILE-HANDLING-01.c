//BASIC-OF-FILE-HANDLING-01
/*
A file is a container in computer storage devices used for storing data.
Why files are needed?

    When a program is terminated, the entire data is lost. Storing in a file will preserve your data even if the program terminates.
    If you have to enter a large number of data, it will take a lot of time to enter them all.
    However, if you have a file containing all the data, you can easily access the contents of the file using a few commands in C.
    You can easily move your data from one computer to another without any changes.

Types of Files

When dealing with files, there are two types of files you should know about:

    Text files
    Binary files

1. Text files

Text files are the normal .txt files. You can easily create text files using any simple text editors such as Notepad.
2. Binary files

Binary files are mostly the .bin files in your computer.

Instead of storing data in plain text, they store it in the binary form (0's and 1's).

They can hold a higher amount of data, are not readable easily, and provides better security than text files.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
File Operations

In C, you can perform four major operations on files, either text or binary:

    Creating a new file
    Opening an existing file
    Closing a file
    Reading from and writing information to a file

*/
/*
Working with files

When working with files, you need to declare a pointer of type file. 
This declaration is needed for communication between the file and the program.

FILE *fptr;
*/
// syntax : ptr = fopen("location","mode");
//////////////////////////////////////////
//modes
//r,rb,w,wb,a,ab,r+,rb+,w+,wb+,a+,ab+
//fclose(fptr); to close the file
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write to a text file (w mode)
#include<stdio.h>
int main()
{
    FILE *p;
    // lets cretae a file .txt file
    p = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new.txt","w");// if file exits it will overwite it 
    // just replace \ to \\ in the path 
    int num;
    printf("\nENTER A NUMBER:");
    scanf("%d",&num);
    // puting the value of num in file
    // syntax  fprintf(fptr,"%d/datatype",varibale);
    fprintf(p,"%d",num);
    fclose(p);


}

