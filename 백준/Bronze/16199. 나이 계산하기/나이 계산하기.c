#include <stdio.h>

int main () {
    int birthYear, birthMonth, birthDay;
    int nowYear, nowMonth, nowDay;
    int age1=0, age2=0, age3=0;

    scanf("%d %d %d", &birthYear, &birthMonth, &birthDay);
    scanf("%d %d %d", &nowYear, &nowMonth, &nowDay);
    
    int diffMonth = birthMonth - nowMonth;
    int diffDay = birthDay - nowDay;

    age1 = nowYear - birthYear;
    if (diffMonth > 0)
    {
        age1 = age1 - 1;
    }
    else if (diffMonth == 0 && diffDay > 0)
    {
        age1 = age1 - 1;
    }
    
    age2 = nowYear - birthYear + 1;
    age3 = nowYear - birthYear;

    printf("%d\n%d\n%d", age1, age2, age3);
}