//Problem: https://atcoder.jp/contests/abc284/tasks/abc284_a?lang=en

#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin >> n;

    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        str.push_back(x);
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        cout << str[i] << endl;
    }
    

    return 0;
}