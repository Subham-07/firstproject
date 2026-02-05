#include<stdio.h>

void input(int lnums[],int n);
void counter(int lnums[],int n);


int main(){
    int n;
    printf("Size of Array : ");
    scanf("%d",&n);
    int lnums[n];
    
    input(lnums,n);
    counter(lnums,n);

    return 0;
}

void input(int lnums[],int n){

    for(int i=0; i<n; i++){
        printf("Values[%d] : ",i);
        scanf("%d",&lnums[i]);
    }
}


void counter(int lnums[],int n){
    
    for(int i=0; i<n; i++){
        int count = 0;
        if(lnums[i]==lnums[i+1])
        {
            count++;
            break;
        }
            
        
        printf("%d Occurence :%d \n" ,lnums[i],count+1);
    }

}
