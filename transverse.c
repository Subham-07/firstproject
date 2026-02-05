#include<stdio.h>
int main()
{
    int m,n;
    printf("Rows :  ");
    scanf("%d",&m);
    printf("Columns :  ");
    scanf("%d",&n);
    int arr1[m][n],arr2[m][n];
    
    printf("Elements : ");
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            arr2[i][j]=arr1[j][i];
        
        }
    }
    

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}