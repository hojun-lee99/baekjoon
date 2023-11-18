#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    char dec[1000003] = { 0 };
    char oct[333334] = { 0 };

    scanf("%s", dec);
    int lendec = strlen(dec);

    if (lendec % 2 == 1)
    {
        dec[(lendec/2)] -= '0';
    }
    
    for (int i = 0; i < lendec / 2; i++)
    {
        char num = dec[i] - '0';
        dec[i] = dec[lendec - i - 1] - '0';
        dec[lendec - i - 1] = num;
    }

    int divid = (int)ceil((double)(lendec)/3.0);
    int count = 0;
    for (int i = 0; i < divid; i++)
    {
        oct[i] = (oct[i] + ((dec[count++])));
        oct[i] = (oct[i] + ((dec[count++]) * 2)); 
        oct[i] = (oct[i] + ((dec[count++]) * 2 * 2));
    }

    for (int i = 0; i < divid/2; i++)
    {
        char num = oct[i];
        oct[i] = oct[divid - i - 1];
        oct[divid - i - 1] = num;
    }
    for (int i = 0; i < divid; i++)
    {
        printf("%d", oct[i]);
    }      
}   