#include<stdio.h>

struct node
{
    int process_no, at, bt, rt, fwt,wt, ct, tat,pt;
};


int main()
{
    int n,t=0,i,count=0,short_p;
    float total_WT=0,total_TAT=0,Avg_WT,Avg_TAT;
    printf("\nEnter the number of total processess : ");
    scanf("%d",&n);
    struct node request[n];
    int temp[n],temp1[n];
    for(i=0;i<n;i++)
    {
        request[i].process_no=i+1;
        printf("\nEnter Arrival time , Burst time of process %d :",i+1);
        scanf("%d%d",&request[i].at,&request[i].bt);
        request[i].ct=0;
        request[i].tat=0;
        request[i].wt=0;request[i].fwt=0;
        temp[i]=request[i].bt;
        temp1[i]=request[i].bt;
    }


    // we initialize the burst time of a process with maximum
    request[n-1].wt=-1;
    printf("\n process execution order :");
    for(t=0;count!=n;t++)
    {
        short_p=n-1;
        for(i=0;i<n;i++)
        {
            if( request[i].at<=t && request[i].bt>0&&request[i].wt>=request[short_p].wt)
            {
                if(request[i].wt==request[short_p].wt && request[i].bt>=request[short_p].bt){
                    if(request[i].wt==request[short_p].wt && request[i].bt>request[short_p].bt){
                        short_p=i;
                        request[i].wt=0;
                    }
                    else if(request[i].wt==request[short_p].wt && request[i].bt==request[short_p].bt&&request[i].at<request[short_p].at){
                        short_p=i;
                        request[i].wt=0;
                    }

                }
                else if(request[i].wt>request[short_p].wt ){
                    short_p=i;
                    request[short_p].wt=0;
                }
            }
        }
        printf("\t P[%d] :",short_p+1);
        request[short_p].bt=request[short_p].bt-1;
        for(int j=0;j<n;j++)
        {
            if(j!=short_p&&request[j].at<=t&&request[j].bt>0)
            {
                request[j].wt=request[j].wt+1;
            }
        }
        // if any process is completed
        if(request[short_p].bt==0)
        {
            // one process is completed
            // so count increases by 1
            count++;
            request[short_p].fwt=t+1-request[short_p].at-temp[short_p];
            request[short_p].tat=t+1-request[short_p].at;

            // total calculation
            total_WT=total_WT+request[short_p].fwt;
            total_TAT=total_TAT+request[short_p].tat;

        }

    }

    Avg_WT=total_WT/n;
    Avg_TAT=total_TAT/n;
    for( i=0;i<n;i++){

        request[i].ct=request[i].at+request[i].tat;
        request[i].bt=temp1[i];
    }
    // printing of outputs
    printf("\n\n\n                     RESULT OF CPU Scheduling                    \n");
    printf("\nProcess no\tAT\tBT\tCT\tTAT\tWaiting_time\n");
    for(i=0;i<n;i++)
    {
        printf("\nprocess[%d]\t%d\t %d\t %d\t %d\t\t%d\n",request[i].process_no,request[i].at,request[i].bt,request[i].ct,request[i].tat,request[i].fwt);
    }
    printf("Average waiting time is : %f\n",Avg_WT);
    printf("Average turn around time is : %f\n",Avg_TAT);
    return 0;
}