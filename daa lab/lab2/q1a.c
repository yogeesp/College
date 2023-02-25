#include <stdio.h>  
   
int main()  
{  

    int n;
    printf("enter the number of elements \n");
    scanf("%d",&n);
    int arr[n]   ;
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }

    
    //length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    printf("Duplicate elements in given array: \n");  
    //Searches for duplicate element  
    for(int i = 0; i < length; i++) {  
        for(int j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", arr[j]);  
        }  
    }  
    return 0;  
}
