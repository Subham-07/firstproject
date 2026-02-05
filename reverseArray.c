#include <stdio.h>


int elementsOfArray(int nums[],int n);
int reverseArray(int nums[],int n);
int reversedArray(int nums[],int n);

int main(){
   int n;
   printf("Enter the size of Array : ");
   scanf("%d",&n);
   int nums[n];
   elementsOfArray(nums,n);
   reverseArray(nums,n);
   reversedArray(nums,n);


   return 0;
}


int elementsOfArray(int nums[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Value %d : ",i);
        scanf("%d",&nums[i]);
    }

    return 0;
}

int reverseArray(int nums[],int n){
    int temp;
    for(int i=0, j=n-1; i<j; i++,j--)
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    
    }
    
    return 0;
}

int reversedArray(int nums[],int n){
    
    for(int i=0; i<n; i++){
    printf("Values %d : %d\n",i,nums[i]);
    }
   return 0;
}