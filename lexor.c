#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int lexor(char p[],char db[]){
    int c=0;
if(p[0] == 'C' && p[1] == 'R' && p[2] == 'E' && p[3] == 'A' && p[4] == 'T' && p[5] == 'E'){
            char DB[100];
            strncpy(DB,p+6,strlen(p)-2);
            CREATE_DB(DB);
            c++;
    }
        if(p[0] == 'S' && p[1] == 'E' && p[2] == 'L' && p[3] == 'E' && p[4] == 'C' && p[5] == 'T'){
            if(strlen(db)>1){
                selec(db);
            }
            else{
                printf("No DB has selected\n");
            }
            c++;
    }
        if(p[0] == 'U' && p[1] == 'S' && p[2] == 'E'){
            if(strlen(db)>1){
                system("cd ..");
            }
            char DB[100];
            int q = 4;
            int cha = p[q];
            while((cha>=65 && cha<=90)||(cha>=97 && cha<=122)){
                q++;
                cha = p[q];
            }
            strncpy(DB,p+4,q-4);
            strcpy(db,DB);
            USE_DB(DB);
            c++;
    }
    if(p[0] == 'D' && p[1] == 'E' && p[2] == 'L' && p[3] == 'E' && p[4] == 'T' && p[5] == 'E'){
            char DB[100];
            strncpy(DB,p+6,strlen(p)-2);
            DELETE_DB(DB);
            c++;
    }
    if(p[0]=='c' && p[1]=='l' && p[2]=='e' && p[3]=='a' && p[4]=='r'){
        system("clear");
        c++;
    }
        if(c==0){
            printf("Invalid Query\n");
    }
    return 0;
}