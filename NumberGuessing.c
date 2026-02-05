#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void result(int user,int comp,int count);


int main()
{
    int user,count=1;
    srand(time(NULL));
    int min = 1,max = 100;
    int comp = ((rand() % max - min + 1 )+ 1);
    result(user,comp,count);
    
    
    return 0;
}


void result(int user,int comp,int count){ 

    do{
        printf("Guess : ");
        scanf("%d",&user);
        if(user>comp)
        {
        printf("SMALLER than %d\n",user);
        printf("\n\n");
        count++;
        }
        
        else if(user<comp)
        {
        printf("GREATER than %d\n",user);
        printf("\n\n");
        count++;
        
        }

        else
        {
            printf("***********************\n");
            printf("*   !!  CORRECT  !!   *\n");
            printf("*    Attempts : %d     *\n",count);
            printf("***********************\n");
             
            break;
        }
        Sleep(500);
    }while(user!=comp || user==comp); 
    printf("       Thank You       "); 
}