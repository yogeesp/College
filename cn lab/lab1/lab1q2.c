#include<stdio.h>

struct info{
    char name[20];
    int roll;
    float cgpa;

};

void display(struct info *i){
    printf("Name %s\n",i ->name);
    printf("Roll No %d\n",i -> roll);
    printf("CGPA: %f\n",i ->cgpa);
}

int main() {
    struct info a = {"Gunjan Tarania",2006071,  9.1};
    display(&a);
    return 0;
}
