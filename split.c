#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    // char string[500];
    // printf("Enter the string : ");
    // fgets(string,sizeof(string),stdin);
    // string[strcspn(string, "\n")] = 0;
    
    // char* token = strtok(string, " ");

    
    // while (token != NULL) {
    //     printf(" % s\n", token);
    //     token = strtok(NULL, " ");
    // }
    char name[177];
    printf("Name ");
    scanf("%s",&name);
    printf("%c",name[2]);
}    