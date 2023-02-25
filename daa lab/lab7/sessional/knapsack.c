#include<stdio.h>
#include<stdlib.h>

void knapsack(int n,float weight[],float profit[],float capacity){

    float x[20], tp=0;
    int i,j,u;
    u=capacity;

    for(i=0;i<n;i++)
        x[i]=0.0;

    for(i=0;i<n;i++){

        if (weight[i]>u)
            break;
        else{
            x[i]=1.0;
            tp+=profit[i];
            u-=weight[i];
        }
    }
    if (i < n)
    x[i] = u / weight[i];
 
    tp = tp + (x[i] * profit[i]);
    
    printf("\nThe result vector is:- ");
    for (i = 0; i < n; i++)
        printf("%f\t", x[i]);
    
    printf("\nMaximum profit is:- %f", tp);
}

int main(){
    int n,i,j;
    float weight[20],profit[20],ratio[20],capacity,temp;

    printf("Enter the number of objects:\n");
    scanf("%d",&n);
    
    printf("Enter weights and profits:\n");
    for (i=0;i<n;i++){
        scanf("%f %f",&weight,&profit);
    }

    printf("Enter the capacity");
    scanf("%f",&capacity);

    for (i=0;i<n;i++){
        ratio[i]=profit[i]/weight[i];
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (ratio[i]<ratio[j]){
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;

                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;

            }
        }
    }
    knapsack(n,weight,profit,capacity);
    return(0);
}   

    // float profit[5]=[20000,30000,66000,40000,60000];
    // float weight[5]=[10,20,30,40,50];