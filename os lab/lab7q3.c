#include<stdio.h>
 #include<unistd.h> 
 #include<sys/types.h> 
 #include<sys/wait.h> 
 int main(){
printf("PNO\tPID\tPPID\n");
printf("1\t%d\tRoot Process in tree\n",getpid()); pid_t P2,P3;
P2=fork(); wait(NULL); if(P2==0){
printf("2\t%d\t%d\n",getpid(),getppid()); pid_t P4,P5;
P4=fork(); wait(NULL); if(P4==0){
printf("4\t%d\t%d\n",getpid(),getppid());
} if(P4>0){
P5=fork(); wait(NULL); if(P5==0){
printf("5\t%d\t%d\n",getpid(),getppid()); pid_t P8,P9;
P8=fork(); wait(NULL); if(P8==0){
printf("8\t%d\t%d\n",getpid(),getppid());
} if(P8>0){
P9=fork(); wait(NULL); if(P9==0){
printf("9\t%d\t%d\n",getpid(),getppid());
}
}
}
}
} if(P2>0){
pid_t P3; P3=fork(); wait(NULL); if(P3==0){
printf("3\t%d\t%d\n",getpid(),getppid()); pid_t P6,P7;
P6=fork(); wait(NULL); if(P6==0){
printf("6\t%d\t%d\n",getpid(),getppid());
}

if(P6>0){
P7=fork(); wait(NULL); if(P7==0){
printf("7\t%d\t%d\n",getpid(),getppid());
}
}
}
}

}