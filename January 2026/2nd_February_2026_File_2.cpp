// Problem: https://codeforces.com/contest/2028/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;

        string str;
        cin >> str;

        int flag = 0;

        int x = 0, y = 0;
        for (int i = 0; i < 100; i++)
        {
            for (char c : str)
            {
                if (c == 'E')
                    x++;
                if (c == 'W')
                    x--;
                if (c == 'N')
                    y++;
                if (c == 'S')
                    y--;

                if (x == a && y == b)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}