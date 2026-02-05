#include<stdio.h>

int main(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int t=0; t<i; t++)
        {
            printf("  ");
        }
        for(int j=n; j>i; j--)
        {
            printf("* ");
        }
        for(int j=n-1; j>i; j--)
        {
            printf("* ");
        }
        
        printf("\n");
       
    }
    for (int i = 1; i < n; i++)
    {
       for (int j = n-1; j > i; j--)
       {
            printf("  ");
       } 
       for (int j =-1; j < i; j++)
       {
            printf("* ");
       } 
       for (int j =0; j < i; j++)
       {
            printf("* ");
       } 
       printf("\n");
    }
   
    
}