import java.util.*;
class Question
{
    int n,lb,ub;
    int arr[];
    
    Question(int n1,int lb1,int ub1)
    {
        n=n1;
        lb=lb1;
        ub=ub1;
        arr=new int[n];
    }
    
    void input()
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter " + n +" numbers :");
        
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        
    }
    
    void task()
    {
        int i,j,t,c1=0,c2=0,k;
        
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            c1++;//even numbers
            
            else
            c2++;//odd numbers
        }
        
        int arr1[]=new int[c2];//odd numbers
        int arr2[]=new int[c1];//even numbers
        
        k=0;
        
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
            arr1[k]=arr[i];
            k++;
            }
       }
       
        k=0;
        
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
            arr2[k]=arr[i];
            k++;
            }
       }
       
       //sorting array arr1
       for(i=0;i<arr1.length;i++)
       {
           for(j=i+1;j<arr1.length;j++)
           {
               if(arr1[i]>arr1[j])
               {
                   k=arr1[i];
                   arr1[i]=arr1[j];
                   arr1[j]=k;
                   
               }
            }
        }
       
       //sorting array arr2
       for(i=0;i<arr2.length;i++)
       {
           for(j=i+1;j<arr2.length;j++)
           {
               if(arr2[i]>arr2[j])
               {
                   k=arr2[i];
                   arr2[i]=arr2[j];
                   arr2[j]=k;
                   
               }
            }
        }
        
        for(i=0;i<c2;i++)
        {
            arr[i]=arr1[i];
        }
        
        for(k=0;k<c1;k++)
        {
            arr[i]=arr2[k];
            i++;
        }
        
        System.out.println("Array :");
        for(i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        

      
    System.out.println("Duplicate elements in given array: ");  
        //Searches for duplicate element  
        for(int z = 0; z < arr.length; z++) {  
            for(int x = z + 1; x < arr.length; x++) {  
                if(arr[z] == arr[x])  
                    System.out.println(arr[x]);  
            }  
        }  
        
        
    }
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        
        int n,lb,ub;
        
        System.out.println("Enter number of elements to be inserted, lower limit, upper limit :");
        n=sc.nextInt();
        lb=sc.nextInt();
        ub=sc.nextInt();
        
        Question ob=new Question(n,lb,ub);
        
        ob.input();
        ob.task();
    }
    
}
