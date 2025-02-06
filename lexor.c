#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int lexor(char p[],char db[]){
    int c=0;
if(p[0]=='I' && p[1]=='N' && p[2]=='S' && p[3]=='E' && p[4]=='R' && p[5]=='T' && p[6]==' '){
    if(strlen(db)>1){
        char TB[100];
        int q = 7;
        int cha = p[q];
        while((cha>=65 && cha<=89)||(cha>=97 && cha<=122)){
            q++;
            cha = p[q];
        }
        strncpy(TB,p+7,q-7);
        TB[q-7]='\0';
        int q1 = q+1;
        int cha1 = p[q1];
        while((cha1>=65 && cha1<=89)||(cha1>=97 && cha1<=122)||(p[q1]==',')||(cha1>=48 && cha1<=57)){
            q1++;
            cha1 = p[q1];
        }
        char data[100];
        strncpy(data,p+q+1,q1-q-1);
        data[q1-q-1]='\0';
        INS_TB(TB,db,data);
        c++;
    }
    else{
        printf("No DB has selected\n");
    }
}
if(p[0] == 'C' && p[1] == 'R' && p[2] == 'E' && p[3] == 'A' && p[4] == 'T' && p[5] == 'E' && p[6] == ' ' && p[7] == 'D' && p[8] == 'B'){
            char DB[100];
            strncpy(DB,p+9,strlen(p)-2);
            CREATE_DB(DB);
            c++;
    }
    if(p[0] == 'C' && p[1] == 'R' && p[2] == 'E' && p[3] == 'A' && p[4] == 'T' && p[5] == 'E' && p[6] == ' ' && p[7] == 'T' && p[8] == 'B'){
            char TB[100];
            int q = 10;
            int cha = p[q];
            while((cha>=65 && cha<=89)||(cha>=97 && cha<=122)){
                q++;
                cha = p[q];
            }
            strncpy(TB,p+10,q-10);
            TB[q-10]='\0';
            CREATE_TB(TB,db);
            c++;
    }
        if(p[0] == 'S' && p[1] == 'E' && p[2] == 'L' && p[3] == 'E' && p[4] == 'C' && p[5] == 'T' && p[6] == ' '){
            if(strlen(db)>1){
                char TB[100];
                int q = 7;
                int cha = p[q];
                while((cha>=65 && cha<=89)||(cha>=97 && cha<=122)){
                    q++;
                    cha = p[q];
                }
                strncpy(TB,p+7,q-7);
                TB[q-7]='\0';
                selec(TB,db);
                c++;
                
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
            while((cha>=65 && cha<=89)||(cha>=97 && cha<=122)){
                q++;
                cha = p[q];
            }
            strncpy(DB,p+4,q-4);
            DB[q-4]='\0';
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