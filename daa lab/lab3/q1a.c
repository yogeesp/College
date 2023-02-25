//check if number is prime and calculate time complexity.
#include <stdio.h>
int  main(){
    int i,n,flag=0,step=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if (n%i ==0){
            printf ("Number is not prime.");
            flag=1;
            break;
        }
        step++;
        
    }
    if (flag == 0){
        printf ("Number is prime.");

    }
    step++;
    printf("Number of steps %d",step);
}
