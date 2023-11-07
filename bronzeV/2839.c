#include <stdio.h>

int main(){
    int num;
    int i;

    scanf("%d", &num);

    while(num >= 5){
        num -= 5;
        i++;
    }
}