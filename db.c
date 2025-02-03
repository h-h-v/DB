#include<stdio.h>
#include "ddl.c"
#include<stdlib.h>
#include<string.h>
#define MAXCHAR 1000
int main(){
    char db[100]=" ";
    char p[100]=" ";
    printf("Welcome to the DuckDB shell. Typer SQL statements below or 'exit' to exit the program\n\n");
    while(p[0] != 'e' && p[1] != 'x' && p[2] != 'i' && p[3] != 't'){
        printf("DB>");
        fgets(p,100,stdin);
        printf("%ld",strlen(p));
        if(p[0] == 'C' && p[1] == 'R' && p[2] == 'E' && p[3] == 'A' && p[4] == 'T' && p[5] == 'E'){
            char DB[100];
            strncpy(DB,p+6,strlen(p)-2);
            CREATE_DB(DB);
            continue;
    }
        if(p[0] == 'S' && p[1] == 'E' && p[2] == 'L' && p[3] == 'E' && p[4] == 'C' && p[5] == 'T'){
            select(db);
            continue;
    }
        if(p[0] == 'U' && p[1] == 'S' && p[2] == 'E'){
            char DB[100];
            strncpy(DB,p+3,strlen(p)-2);
            strcpy(db,DB);
            USE_DB(DB);
            continue;
    }
        else{
            printf("Invalid Query\n");
            continue;
        }
    }
    return 0;
}