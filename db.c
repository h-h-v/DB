#include<stdio.h>
#include "ddl.c"
#include "lexor.c"
#include<stdlib.h>
#include<string.h>
#define MAXCHAR 1000
char db[100]=" ";
int main(){
    char p[100]=" ";
    printf("Welcome to the Lu2DB shell. Typer SQL statements below or 'exit' to exit the program\n\n");
    while(p[0] != 'e' && p[1] != 'x' && p[2] != 'i' && p[3] != 't'){
        printf("DB> ");
        fgets(p,100,stdin);
        if(lexor(p,db)){
            continue;
        }
    }
    return 0;
}