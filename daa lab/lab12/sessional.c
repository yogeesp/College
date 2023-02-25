#include<stdio.h>

void knapsack(int n,float weight[],float profit[],capacity){

    int j,tp=0;
    float profit[],ratio[5],x[5];
    u=capacity;
    for(int i=0;i<5;i++)
        x[i]=0.0;
    
    for (int i=0;i<5;i++)
        ratio[i]=profit[i]/weight[i];

    for (int i=0;i<5;i++){
        if weight[i]>u:
            break;
        else{
            x[i]=1.0;
            tp+=profit[i];
            u-=weight[i];
        }
    }

    if(i<5)
    x[i]= u/weight[i];

    tp+= x[i]*profit[i];

    printf("Resultant array:");
    for(int i=0; i < n; i++){
        printf("%f /t",x[i]);
    }

}
int main(){
    int j,n=5,capacity;
    float profit[5]=[20000,30000,66000,40000,60000];
    float weight[5]=[10,20,30,40,50];
    printf("Enter capacity");
    scanf("%f",&capacity);

    for(int i=0;i<5;i++){
        for(j=1;i<5;i++){
            int temp=profit[i];
            profit[i]=profit[j];
            profit[j]=profit[temp];

            temp=weight[j];
            weight[j]=weight[i];
            weight[i]=temp;

            temp=profit[j];
            profit[j]=profit[i];
            profit[i]=temp;
        }
    }
    knapsack(n,weight,profit,capacity);
    return (0);

}