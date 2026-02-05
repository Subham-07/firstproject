#include<stdio.h>
int main()
{
    int m,n;
    printf("Rows : ");
    scanf("%d",&m);
    printf("Columns : ");
    scanf("%d",&n);

    int matrix1[m][n],matrix2[m][n],fmatrix[m][n];

    printf("Matrix 1 : \n");
    for (int i=1; i<=m; i++)
    {
        
        for (int j=1; j<=n; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Matrix 2 : \n");
    for (int i=1; i<=m; i++)
    {
        

        for (int j=1; j<=n; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            fmatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Final Matrix : ");
    printf("\n");
    for (int i=1; i<=m; i++)
    {

        
        for (int j=1; j<=n; j++)
        {
            printf("%d ",fmatrix[i][j]);
        }
        printf("\n");
    }
}