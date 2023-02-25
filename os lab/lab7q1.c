#include<stdio.h> 
#include<unistd.h>
 #include<sys/types.h> 
 #include<sys/wait.h> 
int main()
{
printf("PNO\tPID\tPPID\n");
printf("1\t%d\tRoot process in tree\n",getpid()); pid_t P2,P3;
P2=fork(); wait(NULL); if(P2<0){
printf("Fork System call failed\n");
} if(P2==0){
printf("2\t%d\t%d\n",getpid(),getppid()); 
pid_t P4;
P4=fork(); wait(NULL); 
if(P4==0){
printf("4\t%d\t%d\n",getpid(),getppid());
}
} if(P2>0)
{
pid_t P3; P3=fork(); wait(NULL); if(P3==0)
{
printf("3\t%d\t%d\n",getpid(),getppid()); pid_t P5;
P5=fork(); wait(NULL); if(P5==0)
{
printf("5\t%d\t%d\n",getpid(),getppid());
}
}
}
}
