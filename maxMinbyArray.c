#include<stdio.h>

int numbers(int nums[],int n);
int maxMin(int nums[],int n);


int main(){
    int n;
    
    printf("Size of Arraay : ");
    scanf("%d",&n);
    int nums[n];
    numbers(nums,n);
    maxMin(nums,n);
    
    
    return 0;
}
int numbers(int nums[],int n){
    
    for (int i = 0; i<n; i++)
    {
        printf("Number[%d] : ",i);
        scanf("%d",&nums[i]);
        
    }
    
    return nums[n];
}

int maxMin(int nums[],int n){
    int max,min;
    max = nums[0];
    min = nums[0];


    for(int i=0,j=1; i<n,j<n; i++,j++)
    {
        if(max < nums[j])
        {
            max = nums[j];
        }
        else
        {
            max;
        }
        if(min > nums[j])
        {
            min = nums[j];
        }
        else
        {
            min;
        }
    } 
    printf("Minimum : %d\n",min);
    printf("Maximum : %d\n",max);
    return 0;
}
