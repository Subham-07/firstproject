#include<stdio.h>
int main(){
    int n,s=4;
    printf("Number  : ");
    scanf("%d",&n);
    while(s!=0)
    {
        for(int i=1; i<=n; i++)
        {
            if(i==1 || i==n)
            {
                for(int j=1; j<=n; j++)
                {
                    printf("%d ",s);
                }
                printf("\n");
            }
            else 
            {   
                printf("%d ",s);
                for(int j=1; j<=n-2; j++)
                {
                    printf("%d ",s-1);
                }
                printf("%d",s);
                printf("\n");
            
            }
            
        }
        s--;
    }
   

    return 0;
}