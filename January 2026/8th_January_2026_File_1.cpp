
// Problem / Topic: https://codeforces.com/problemset/problem/1608/A

/*
    New learning: Understand the statement, not always need to fillow
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 2 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}