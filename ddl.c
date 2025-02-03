#include<stdlib.h>
#include<string.h>
#define MAXCHAR 1000
int CREATE_DB(char s[100]){
    char x[100]="mkdir ";
    strcat(x,s);
    system(x);
    return 0;
}
int USE_DB(char s[100]){
    char x[100]="cd ";
    strcat(x,s);
    system(x);
    return 0;
}

int select(char db[]){
    char x[]="/data.csv";
    char y[100]="";
    strcat(y,x);
    printf("%ld\n",strlen(x));
    FILE *pInput = fopen("DINGO/data.csv", "r");
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
    return 0;
}