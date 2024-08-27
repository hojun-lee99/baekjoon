#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int main () {
    int n;
    map<string, int> worktimes;

    cin >> n;
    cin.ignore();

    // 문자열을 입력받아 map에다 근무자와 근무시간 저장
    for (int i = 0; i < n; i++)
    {
        string morning, lunch, afternoon, dawn;
        char separator = ' ';
        string str_buf;

        getline(cin, morning);
        getline(cin, lunch);
        getline(cin, afternoon);
        getline(cin, dawn);

        istringstream morningIss(morning);
        istringstream lunchIss(lunch);
        istringstream afternoonIss(afternoon);
        istringstream dawnIss(dawn);


        while (getline(morningIss, str_buf, separator))
        {
            if (str_buf.compare("-") == 0)
            {
                continue;
            }
            if (worktimes.find(str_buf) == worktimes.end())
            {
                worktimes[str_buf] = 0;
            }

            worktimes[str_buf] += 4;
        }
        
        while (getline(lunchIss, str_buf, separator))
        {
            if (str_buf.compare("-") == 0)
            {
                continue;
            }
            if (worktimes.find(str_buf) == worktimes.end())
            {
                worktimes[str_buf] = 0;
            }

            worktimes[str_buf] += 6;
        }
        
        while (getline(afternoonIss, str_buf, separator))
        {
            if (str_buf.compare("-") == 0)
            {
                continue;
            }
            if (worktimes.find(str_buf) == worktimes.end())
            {
                worktimes[str_buf] = 0;
            }

            worktimes[str_buf] += 4;
        }
    
        while (getline(dawnIss, str_buf, separator))
        {
            if (str_buf.compare("-") == 0)
            {
                continue;
            }
            if (worktimes.find(str_buf) == worktimes.end())
            {
                worktimes[str_buf] = 0;
            }

            worktimes[str_buf] += 10;
        }
    }
    
    auto px = max_element(worktimes.begin(), worktimes.end(), [](const auto &x, const auto &y){return x.second < y.second;});

    auto pn = min_element(worktimes.begin(), worktimes.end(), [](const auto &x, const auto &y){return x.second < y.second;});

    if ((px->second - pn->second) <= 12)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}