#include <stdio.h>

 
int main()
{
    int a[10000],i,n,key;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter array elemts: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d", &key);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("element found at %d.",i+1);
            return 0;		 
        }

    }
    
	printf("element  not  found");
}