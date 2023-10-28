//
//  main.c
//  File Handling
//
//  Created by Amaan Saifi on 16/11/21.
//How to open a file in c.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;//it is the variable type for any file.
    //fopen to open any file
    fr=fopen("/Users/amaansaifi/Desktop/Accessing an Array | Coursera.pdf","r");
    //Checking if file is open or not.
    if(fr==NULL) printf("File is not present\n");
    else printf("File opened in read mode\n");
    //Reading the file.
    int i=0;
    while((i=fgetc(fr))!=EOF)
    {
        printf("%c",i);
    }
    
    return 0;
}
