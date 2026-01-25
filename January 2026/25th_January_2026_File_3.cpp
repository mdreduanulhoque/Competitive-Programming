// problem: https://codeforces.com/contest/1931/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int i = 1; i <= 26; i++)
        {
            int flag = 0;
            for (int j = 1; j <= 26; j++)
            {
                int k = x - i - j;
                if (i + j + k == x && k <= 26)
                {
                    printf("%c%c%c\n", i + 96, j + 96, k + 96);
                    flag = 1;
                    break;
                }
                
            }
            if (flag == 1)
                    break;
        }
    }

    return 0;
}