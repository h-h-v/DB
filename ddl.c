#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#define MAXCHAR 1000
<<<<<<< HEAD
=======
int CREATE_TB(char s[100],char db[]){
    if(strlen(db)>1){
        char x[100]=".lu";
        char y[100]="touch ";
        strcat(y,s);
        strcat(y,x);
        printf("%s\n",y);
        system(y);
    }
    else{
        printf("No DB has selected\n");
    }
    return 0;
}
>>>>>>> 730b162 (Initial commit)
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

int selec(char db[]){
<<<<<<< HEAD
    char x[]="/data.csv";
=======
    char x[]="/data.lu";
>>>>>>> 730b162 (Initial commit)
    char y[100]="";
    strcat(y,db);
    strcat(y,x);
    if(access(y, F_OK) == 0){
    FILE *pInput = fopen(y, "r");
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