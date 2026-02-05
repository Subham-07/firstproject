#include <stdio.h>

void input(int nums[],int n);
void checkl(int nums[],int n);

int main(){
    int n;
    printf("Size of Array : ");
    scanf("%d",&n);
    int nums[n];
    input(nums,n);
    checkl(nums,n);

    return 0;
}

void input(int nums[],int n){
    for(int i=0; i<n; i++){
        printf("Value[%d] : ", i);
        scanf("%d",&nums[i]);
    }
}


void checkl(int nums[],int n){
    int max = nums[0];
    int smax = nums[0];
    for(int i=0; i<n; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    printf("Largest Number : %d\n",max);

    for(int i=0; i<n; i++){
        if(max != nums[i] && smax < nums[i] ){
            smax = nums[i];
        }
    }
    printf("Second Largest Number : %d\n",smax);
}