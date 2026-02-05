#include<stdio.h>
int main()
{
    int n;
    printf("Number : ");
    scanf("%d",&n);
    for (int i=n; i>=1; i--){
        if(i==n && i==1)
        {
            for (int j=1; j<=n; j++)
            {
                printf("* ");
            
            }
        }
        if(i==n || i==1)
        {
            printf("* ");
        }
        if(i<n || i>1){
            printf("  ");
        }

        
        printf("\n");
        
            
        

    }
    
    
}