#include<stdio.h>
#include<stdlib.h>

int MostreapeatingElement(int A[], int n)
{
    for (int i = 0; i < n; i++)    
    {    
        int temp;
        for (int j = i+1; j < n; j++) 
        {     
           if(A[i] > A[j]) 
           {    
               temp = A[i];    
               A[i] = A[j];    
               A[j] = temp;    
           }     
        }     
    }        
 
    int max_count = 1, res = A[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (A[i] ==A[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = A[i - 1]; 
            } 
            count = 1; 
        } 
    }   
    // If last element is most frequent 
    if (count > max_count) 
    { 
        max_count = count; 
        res = A[n - 1]; 
    }   
    return res; //return the most repeatinng  element
}

int main()
{
    int n;              
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int array[n];      
    printf("Enter the array elements");
    for(int i=0;i<n;i++)  
    {
        scanf("%d",&array[i]);
    } 
    int maxElement =MostrepeatingElement(array, n);    //Function call
    printf("\n Maximum Repeating Element : %d",maxElement);   //Prints the most occuring element 
    return 0;
}