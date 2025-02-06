#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#define MAXCHAR 1000
int INS_TB(char s[],char db[],char data[]){
    char x[100]="";
    strcat(x,db);
    strcat(x,"/");
    strcat(x,s);
    strcat(x,".lu");
    printf("%s\n",x);
    if(access(x, F_OK) == 0){
    FILE *pInput = fopen(x, "a");
    fprintf(pInput, "\n%s",data);
    fclose(pInput);
    }
    else{
        printf("Database is empty\n");
    }
    return 0;
}
int CREATE_TB(char s[100],char db[]){
    if(strlen(db)>1){
        char y[100]="touch ";
        char ds[100];
        strcat(y,db);
        strcat(y,"/");
        strcat(y,s);
        strcat(y,".lu");
        system(y);
    }
    else{
        printf("No DB has selected\n");
    }
    return 0;
}
int CREATE_DB(char s[100]){
    char x[100]="mkdir ";
    strcat(x,s);
    system(x);
    return 0;
}
int DELETE_DB(char s[100]){
    char x[100]="rm -rf ";
    strcat(x,s);
    system(x);
    return 0;
}
int USE_DB(char s[100]){
    char x[100]="cd ";
    strcat(x,s);
    int tf = system(x);
    if(tf==256){
        printf("DB NOT FOUND\n");
    }
    return 0;
}

int selec(char s[],char db[]){
    char x[100]="";
    strcat(x,db);
    strcat(x,"/");
    strcat(x,s);
    strcat(x,".lu");
    printf("%s\n",x);
    if(access(x, F_OK) == 0){
    FILE *pInput = fopen(x, "r");
    char row[MAXCHAR];
        while (feof(pInput) != 1)
    {
        fgets(row, MAXCHAR, pInput);
        int size=0;
        printf("%s\n","+---------+---------+---------+");
        for(int i=0;i<strlen(row);i++){
            if(i==0){
                printf("|%c",row[i]);
                size++;
                continue;
            }
            if(row[i]!=','){
                printf("%c",row[i]);
                size++;
            }
            if(row[i+1]==','){
                printf("%*c",10-size,'|');
                size=0;
            }
        }
    }
    printf("\n%s\n","+---------+---------+---------+");
    }
    else{
        printf("Database is empty\n");
    }
    return 0;
}