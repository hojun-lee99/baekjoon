#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char input1[1000], input2[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a1[26] = {0}, a2[26] = {0};

        scanf("%s" "%s", input1, input2);

        if (strlen(input1) == strlen(input2))
        {
            for (int j = 0; j < strlen(input1); j++)
            {
                a1[input1[j] - 'a']++;
                a2[input2[j] - 'a']++;
            }
            if(memcmp(a1, a2, sizeof(a1)) == 0)
            {
                printf("Possible\n");
            }
            else
            {
                printf("Impossible\n");
            }
        }
        else
        {
            printf("Impossible\n");
        }
    }
}