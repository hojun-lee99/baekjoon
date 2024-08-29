#include<iostream>
using namespace std;

int main () {
    int hp, mp, atk, def;
    int cHp, cMp, cAtk, cDef;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> hp >> mp >> atk >> def >> cHp >> cMp >> cAtk >> cDef;

        hp += cHp;
        mp += cMp;
        atk += cAtk;
        def += cDef;

        if (hp < 1)     hp = 1;
        if (mp < 1)     mp = 1;
        if (atk < 0)    atk = 0;
        
        int totalScore = 1 * hp + 5 * mp + 2 * atk + 2 * def;
        
        cout << totalScore << "\n";
    }
    
    return 0;
}