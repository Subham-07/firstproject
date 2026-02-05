#include <stdio.h>

int nums(int number[],int n);
int evenOdd(int number[],int even[],int odd[],int n,int *oddCount,int *evenCount );
int print(int even[],int odd[],int n,int oddCount,int evenCount);

int main(){
    int n;
    printf("Size of the Array : ");
    scanf("%d",&n);
    int number[n];
    int even[n];
    int odd[n];
    int oddCount = 0,evenCount = 0;
    nums(number,n);
    evenOdd(number,even,odd,n,&oddCount,&evenCount);
    print(even,odd,n,oddCount,evenCount);
    return 0; 
}

int nums(int number[],int n){

    for (int i=0; i<n; i++){
        printf("Values[%d] : ",i);
        scanf("%d",&number[i]);

    }

    return 0;
}

int evenOdd(int number[],int even[],int odd[],int n,int *oddCount,int *evenCount ){

    
    for (int i=0; i<n; i++){
        if(number[i]%2 == 0){
            even[*evenCount]=number[i];
            (*evenCount)++;
        }
        else{
            odd[*oddCount]=number[i]; 
            (*oddCount)++;
        }
    }

    
    return 0;
}

int print(int even[],int odd[],int n,int oddCount,int evenCount){
    printf("ODD Values : ");
    for (int i=0; i<oddCount; i++){
        
     printf("%d ",odd[i]);
    
    }

    printf("\n");

    printf("EVEN Values : ");

    for (int i=0; i<evenCount; i++){
        
        printf("%d ",even[i]);
    
    }

    return 0;
}


    
