/* Write a C program to extract each byte from a given number and store them 
in separate character variables and print the content of those variables. */

#include<stdio.h>


int main(){
    unsigned char BYTE[4];
    unsigned value=77243191;


    BYTE[0] = value ; 
    BYTE[1] = ((value >> 8) ); 
    BYTE[2] = ((value >> 16) );
    BYTE[3] = ((value >> 24) ); 

    printf("%x\n", BYTE[0]);
    printf("%X\n", BYTE[1]);
    printf("%X\n", BYTE[2]);
    printf("%X\n", BYTE[3]);

    return 0;

}