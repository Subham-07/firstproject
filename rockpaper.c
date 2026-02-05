#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int computerop(); 
int userop();
int result(int player1,int player2);


int main(){
    int user;
    do{
        Sleep(1000);
        user = userop();
          
        Sleep(1000);
        int computer = computerop();

        char Winner = result(user,computer);
        
    }while(user<=3 && user >=1);
    
    
    
    return 0;
}



int computerop(){

    srand(time(NULL));
    int min = 1,max = 3;
    int result = ((rand() % max - min + 1 )+ 1);
    if(result == 1)
    {
        printf("Computer : ROCK\n");
    }
    else if(result == 2)
    {
        printf("Computer : PAPER\n");
    }
    else if(result == 3)
    {
        printf("Computer : SCISSOR\n");
    }
    
   
    return result;
}


int userop(){
    int user;
    printf("==================================================== \n");
    printf("                !!  WELCOME TO   !!                  \n"); 
    printf("***           --=ROCK PAPER SCISSOR=--           *** \n");
    printf("==================================================== \n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSOR\n");
    printf("Enter Your Choice : ");
    scanf("%d",&user);
    if(user == 1)
    {
        printf("You : ROCK\n");
    }
    else if(user == 2)
    {
        printf("You : PAPER\n");
    }
    else if(user == 3)
    {
        printf("You : SCISSOR\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    
    
    return user;
}


int result(int player1,int player2){
    if(player1 == player2)
    {
        printf("It's a TIE !!\n");
    }
    
    else if( player1 == 1 && player2 == 2)
    {
        printf(" !!!  --=YOU LOSE=--   !!!\n");
    }
    
    else if(player1 == 1 && player2 == 3)
    {
            printf(" !!!  --=YOU WON=--   !!!\n");
    }
    
    else if( player1 == 2 && player2 == 3)
    {
        printf(" !!!  --=YOU LOSE=--   !!!\n");
    }
    
    else if(player1 == 2 && player2 == 1)
    {
        printf(" !!!  --=YOU WON=--   !!!\n");
    }
    
    else if( player1 == 3 && player2 == 1)
    {
        printf(" !!!  --=YOU LOSE=--   !!!\n");
    }
    else if(player1 == 3 && player2 == 2)
    {
        printf(" !!!  --=YOU WON=--   !!!\n");
    }
    
    else
    {
    
        printf("==================================================== \n");
        printf("       !!        --=THANK YOU=--       !!            \n");
        printf("==================================================== \n");
       
    }
    
}        
 
