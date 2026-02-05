#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>

void welcome();
void punishment(int n);
void hint(int n);
int word(int n,char sabd[]);
int display(int,char neword[]);
int decision(char sabd[],int len,int,char neword[]);
void swap(int len,char guess,char sabd[],char neword[]);

int main()
{   

    srand(time(NULL));
    int min = 0,max = 24;
    int result = ((rand() % max - min + 1 )+ min);
    char sabd[15];
    int len = word(result,sabd),newlen = 2 * len +1;
    char neword[newlen];
    welcome();
    hint(result); 
    display(len,neword);
    decision(sabd,len,newlen,neword);
    return 0;
}

//  It Shows the Welcome Message and about Words and Hints 

void welcome(){
    int n=0;
    char name[20];
    printf("Your Good Name : ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Hello %s,\n",name);
    printf("\n");
    Sleep(1500);
    printf("***********************************\n");
    printf("*  !! WELCOME TO HANGMAN GAME !!  *\n");
    printf("***********************************\n");
    Sleep(1000);
    punishment(n);
    printf("\n");
    printf("   CHANCES : 6  \n");
    printf("\n");
    Sleep(1000);
    printf("HINT : ");
}

// It Stores the Hangman Characters as the Punishments 

void punishment(int n){
    char *hangman[] = {
    "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",

    "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"
    };
    printf("\n");
    printf("%s",hangman[n]);
}

// It Conatins All the Words 

int word(int n,char sabd[]){

    char *words[]={   
        "MANGO","SHIRT","PAN","PEN","BOOK","CAR","CLOUD","CLOCK","CHAIR","HEADPHONE",
        "TREE","SCISSORS","COUCH","BAG","CANDY","BICYCLE","WATER","BROOM","BALL",
        "TABLE","PIZZA","BAT","RED","BIRD","FLOWER"
    };
    int len = strlen(words[n]);
    strcpy(sabd,words[n]);
    return len;
}

// It contains the Hints for the respective Words 

void hint(int n){
   
     char *hints[]={   
        "Name of a fruit","Something you wear","Found in the kitchen",
        "Used for writing","Something you read","Used to travel",
        "Something in the sky","Used to tell time","Found in the classroom",
        "Used to listen to music","Something that grows","Used to cut things",
        "Found in the living room","Used to carry items","Something sweet",
        "A type of vehicle","Something you drink","Used for cleaning",
        "Something you play with","A type of furniture","Something you eat",
        "Used in sports","A color","Something that flies","Found in the garden"
    };
    printf("%s\n",hints[n]);
}

// All Blanks And Left Space are shown due to this function

int display(int len,char neword[]){
    int newlen = 2 * len + 1; 
    printf("WORD : ");
    for(int i=0,j=1; i<newlen-1; i+=2,j+=2){
        neword[i]= '_';
        neword[j]=' ';
    }
    neword[newlen-1]='\0';
    
    printf("%s\n",neword);
    return newlen;
}

// It swap the Spaces With Entered Word 

void swap(int len,char guess,char sabd[],char neword[]){

    int j=0;
    for(int i=0; i<len; i++)
    {
        if(sabd[i]==guess)
        {
            neword[i*2] = guess;
            j+=2;
        }
    }
    printf("WORD : ");
    printf("%s\n",neword);
}

// It take Decision Whether the Enterd data is correct or not

int decision(char sabd[],int len,int newlen,char neword[]){
    
    int chance = 6,found = 0,j=1,it=0,remain=0;
    char guess;
    while(chance > 0 && remain <= len)
    {
        printf("Guess : ");
        scanf(" %c",&guess);
        guess = toupper(guess);        
        for(int i=0; i<=len; i++)
        {
            if(sabd[i]==guess)
            {
               found=1;
               swap(len,guess,sabd,neword); 
               remain++;
               break;
            }
            else
            {
                found=0;
            }
        }
        if(found==0)
        {
            chance--;
            punishment(j);
            j++;
            printf("CHANCES : %d\n",chance);
        }
        else
        {
            printf("\n");
            printf("--  Good Guess  --\n");
            printf("\n"); 
            
        }
        it++;
        if(sabd == neword){
            return 0;
        }
        
       
    }
    if(chance==0){
        printf("FAHHHHHH");
        
    }
}