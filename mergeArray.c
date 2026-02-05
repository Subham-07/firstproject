#include<stdio.h>

void input(int Array[],int a);
void mergedArray(int array1[],int array2[],int merged[],int n,int m);
void print(int merged[],int count);

int main(){
    int n,m,count;
    printf("Size of Array 1 : ");
    scanf("%d",&n);
    printf("Size of Array 2 : ");
    scanf("%d",&m);
    count = n+m;
    int array1[n];
    int array2[m];
    int merged[count];
    input(array1,n);
    input(array2,m);
    mergedArray(array1,array2,merged,n,m);
    print(merged,count);


    return 0;

}


void input(int Array[],int a){
    for(int i=0; i<a; i++){
        printf("Value[%d] : ",i);
        scanf("%d",&Array[i]);
    }
}

void mergedArray(int array1[],int array2[],int merged[],int n,int m){
    
    for(int i=0; i<n; i++){
        merged[i]=array1[i];
        
        
    }
    for(int i=0; i<m; i++){
        merged[i+n]=array2[i];
        
        
    }



}   

void print(int merged[],int count){
    printf("Values : ");
    for(int i=0; i<count; i++){
        printf("%d, ",merged[i]);
        
    }
}