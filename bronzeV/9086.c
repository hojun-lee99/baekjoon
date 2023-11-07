#include<stdio.h>
#include<string.h>

void printFunc(char ary[10][1000], int testNum);

int main(){
    char ary[10][1000] = { 0 };
    int testNum = 0;

    scanf("%d", &testNum);

    for (int i = 0; i < testNum; i++)
    {
        scanf("%s", ary[i]);
    }
    
    printFunc(ary, testNum);
    
}

void printFunc(char ary[10][1000], int testNum){
    for (int i = 0; i < testNum; i++)
    {
        int len = strlen(ary[i]);
        printf("%c%c\n", ary[i][0], ary[i][len-1]);
    }
}