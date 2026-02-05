#include<stdio.h>
int main()
{
    int j=0,wlen=7;
    char guess,shbd[9]="SUBSAM";
    printf("Guess : ");
    scanf("%c",&guess);
    char neword[13]="_ _ _ _ _ _";
    for(int i=0; i<wlen; i++)
    {
        if(shbd[i]==guess)
        {
            neword[i*2] = guess;
            j+=2;
        }
    }
    
    printf("%s",neword);
}