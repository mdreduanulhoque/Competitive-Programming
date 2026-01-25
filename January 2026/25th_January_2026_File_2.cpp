// Problem: https://atcoder.jp/contests/abc286/tasks/abc286_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0; i < n-1; i++)
    {
        if(str[i] == 'n' && str[i+1] == 'a'){
            str.insert(str.begin()+i+1,'y');
            n++;
        }
    }

    cout << str << endl;

    return 0;
}