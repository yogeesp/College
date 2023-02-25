/* Wap to enter a number and store the number across the following structure and print
the content of each member of the structure. Then aggregate each member of the 
structure to form the original number and print the same. struct pkt{ char ch1;
char ch2[2]; char ch3;}; */
#include<stdio.h>



int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    struct pkt{
        char ch1, ch2[2], ch3; 
    };
    
    struct pkt num;
    num.ch1 = n % 10;
    num.ch2[0] = (n / 10) % 10;
    num.ch2[1] = (n / 100) % 10;
    num.ch3 = (n / 1000) % 10;
    printf("Structure aggregate : %d %d %d %d\n", num.ch3, num.ch2[1], num.ch2[0], num.ch1);
    printf("Original Number : %d\n", num.ch3 * 1000 + num.ch2[1] * 100 + num.ch2[0] * 10 + num.ch1);
}