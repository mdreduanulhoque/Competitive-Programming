// Problem / Topic: https://codeforces.com/problemset/problem/1711/A

/*
    New learning: Find the simplest one
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

        cout << n << " ";
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}