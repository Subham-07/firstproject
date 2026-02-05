#include<stdio.h>

void input(int array[],int n);
void unique(int array[],int n);


int main(){
    int n;
    printf("Size of Array : ");
    scanf("%d",&n);
    int array[n];
    input(array,n);
    unique(array,n);

}

void input(int array[],int n){
    for (int i=0; i<n; i++){
        printf("Values[%d] : ",i);
        scanf("%d",&array[i]);
    }
}

void unique(int array[],int n){
    
    for(int i=0; i<n; i++){
        for(int j=n; j>1; j--)
        {
            if(array[i]!=array[j])
            {
                printf("Unique : %d \n", array[i]);
                
            }
        }
        
    }
}