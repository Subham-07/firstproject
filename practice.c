#include<stdio.h>
int main(){
    int a=10;
    int *p,**ptp;
    
    p=&a;
    ptp =p;
    printf("%d\n",p);
    printf("%d",ptp);
}