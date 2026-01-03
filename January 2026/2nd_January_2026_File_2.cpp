// Problem: https://codeforces.com/problemset/problem/102/B

/*
    New learning: Constants matters, String to int & vise-verca
*/

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{

    string n;
    cin >> n;
    long long m = 999;
    if (n.length() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int steps = 0;
    while (m > 9)
    {
        int sum = 0;
        for (int i = 0; i < n.length(); i++)
        {
            sum += (n[i] - '0');
        }
        m = sum;
        n = to_string(sum);
        steps++;
    }

    cout << steps << endl;

    return 0;
}