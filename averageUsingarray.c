#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    float avg,sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    float num[n];
    for(int i=1; i<=n; i++){
        printf("Values : ");
        scanf("%f",&num[i]);
        sum += num[i];
        avg = sum/n;

    }
    
    printf("Average : %.2f",avg);




    return 0;
}