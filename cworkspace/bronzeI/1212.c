#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char dec[1000003] = { 0 };
    char oct[333335] = { 0 };

    scanf("%s", oct);
    int len = strlen(oct);

    int count = 0;
    if (oct[0]<50)
    {
    dec[count++] = oct[0]%2;        
    }
    else if (oct[0]<52)
    {
        dec[count++] = oct[0]/2%2;
        dec[count++] = oct[0]%2;
    }
    else
    {
        dec[count++] = (oct[0]-'0')/2/2;
        dec[count++] = (oct[0]-'0')/2%2;
        dec[count++] = (oct[0]-'0')%2;
    }

    for (int i = 1; i < len; i++)
    {
        dec[count++] = (oct[i]-'0')/2/2;
        dec[count++] = (oct[i]-'0')/2%2;
        dec[count++] = (oct[i]-'0')%2;
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%d", dec[i]);
    }
    
}