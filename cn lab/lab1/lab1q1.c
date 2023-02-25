//Write a C program to swap the content of 2 variables using pointer.

#include<stdio.h>

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main(){
   
    int n1,n2;

    printf("Enter number 1:");
    scanf("%d",&n1);

    printf("Enter number 2:");
    scanf("%d",&n2);

    swap(&n1,&n2);

    printf("Swapped numbers are:%d,%d.",n1,n2);
    return 0;
}