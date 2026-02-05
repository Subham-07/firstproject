#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    square(n);
    
}


void square(int n){

    for(int i=(n*2)-1; i>0; i--)
    {
        if(i == 1 || i==(n*2)-1)
        {
            for(int j=(n*2)-1; j>0; j--)
            {
                printf("%d ",n);
            }
            printf("\n");
        
        }
        else if(i>1 && i<=(n*2)-1)
        {
            for(int j=1,k=1; j<n*2; j++, k++)
            {
                int a = n-1;
                if(j==1 || j==(n*2)-1)
                {
                    printf("%d ",n);
                }
                if(k==i || k==(n*2)-i)
                {
                    printf("%d ",n-1);
                }
                
                // else if(j==2 || j==(n*2)-2)
                // {
                //     printf("%d ",a);

                // }
                
                // else if(j==3 || j==(n*2)-3)
                // {
                //     printf("%d ",a-1);

                // }
                // if(j==4 || j==(n*2)-4)
                // { 
                //     printf("%d ",a-2);
                        
                // }
                
                

            }
            printf("\n");
        }
    }
}
