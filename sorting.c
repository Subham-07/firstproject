#include<stdio.h>

void input(int arr[],int n);
void output(int arr[],int n);

int main()
{
    int n;
    printf("Size of array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        
            }
        }
    }
    output(arr,n);

}

void input(int arr[],int n)
{
    printf("Enter %d Elements : ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int n)
{
   printf("Entered Elements : ");
   for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}