#include<stdio.h>
int main()

{
    int rows,columns,j=1,i=1;
    printf("Rows: ");
    scanf("%d",&rows);
    printf("Columns: ");
    scanf("%d",&columns);
    int matrix1[rows][columns],matrix2[rows][columns],final[rows][columns];


    printf("Enter the matrix 1 : ");
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 1; j <= columns; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }


    
    printf("Enter the matrix 2 : ");
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 1; j <= columns; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            final[i][j]=0;
            for(int k =1; k<=columns; k++)
            {
                final[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    

    printf("Final Matrix : \n");
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 1; j <= columns; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

