 #include <stdio.h>

int waitingtime(int proc[], int n,int burst_time[], int wait_time[])
{
wait_time[0] = 0;
for (int i = 1; i < n ; i++ )
wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
return 0;
}



int turnaroundtime( int proc[], int n, int burst_time[], int wait_time[], int tat[])
{
int i;
for ( i = 0; i < n ; i++)
tat[i] = burst_time[i] + wait_time[i]; 
return 0;
}


int processcompletiontime( int proc[], int n, int arrival_time[], int tat[], int procomp_time[])
{
int i;
for ( i=0; i < n; i++)
procomp_time[i] = tat[i] + arrival_time[i]; 
return 0;
}
int avgtime( int proc[], int n, int burst_time[], int arrival_time[])
{
int wait_time[n], tat[n], procomp_time[n], total_wt = 0, total_tat = 0, total_pct = 0; 
int i;
waitingtime(proc, n, burst_time, wait_time); 
turnaroundtime(proc, n, burst_time, wait_time, tat); 
processcompletiontime(proc, n, arrival_time, tat, procomp_time);
printf("Processes Burst Arrvial Waiting Turnaround Completion Time \n");



for ( i=0; i<n; i++) {
total_wt = total_wt + wait_time[i]; 
total_tat = total_tat + tat[i];
printf(" %d\t %d\t %d\t %d\t %d\t %d\t \n", i+1, burst_time[i], arrival_time[i], wait_time[i], tat[i], procomp_time[i]);
}
printf("Average waiting time = %f\n", (float)total_wt / (float)n); 
printf("Average turn around time = %f\n", (float)total_tat / (float)n); 
return 0;


}



int main() {
int proc[] = { 1, 2, 3, 4, 5};
int n = sizeof proc / sizeof proc[0]; 
int burst_time[] = {2, 5, 7, 12, 6};
int arrival_time[] = {0, 1, 2, 4, 3}; 
avgtime(proc, n, burst_time,arrival_time);
 return 0;
}