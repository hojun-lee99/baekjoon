#include <stdio.h>
#define SIZE 25

struct Album
{
    int year;
    char title[100];
};

int main(){
    struct Album album[SIZE] = {
        {1967, "DavidBowie"},
        {1969, "SpaceOddity"},
        {1970, "TheManWhoSoldTheWorld"},
        {1971, "HunkyDory"},
        {1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},
        {1973, "AladdinSane"},
        {1973, "PinUps"},
        {1974, "DiamondDogs"},
        {1975, "YoungAmericans"},
        {1976, "StationToStation"},
        {1977, "Low"},
        {1977, "Heroes"},
        {1979, "Lodger"},
        {1980, "ScaryMonstersAndSuperCreeps"},
        {1983, "LetsDance"},
        {1984, "Tonight"},
        {1987, "NeverLetMeDown"},
        {1993, "BlackTieWhiteNoise"},
        {1995, "1.Outside"},
        {1997, "Earthling"},
        {1999, "Hours"},
        {2002, "Heathen"},
        {2003, "Reality"},
        {2013, "TheNextDay"},
        {2016, "BlackStar"},
    };

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int start, end;
        int count = 0;
        int startpoint=-1, endpoint=-1;
        scanf("%d %d", &start, &end);
        for (int j = 0; j < SIZE; j++)
        {
            if (start <= album[j].year && end >= album[j].year)
            {
                if (startpoint == -1)
                {
                    startpoint = j;
                }
                endpoint = j;
                
                count++;
            }
        }
        printf("%d\n", count);
        if (startpoint != -1 && endpoint != -1)
        {
            for (int k = startpoint; k <= endpoint; k++)
            {
                printf("%d %s\n", album[k].year ,album[k].title);
            }
        }
    }
}
