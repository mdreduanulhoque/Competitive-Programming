// Problem / Topic: https://codeforces.com/problemset/problem/514/A

/*
    New learning: It feels like heaven to solve a 1200 rated problem 😎
                  Observation + simple logic
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    long long y ;
    cin >> y;

    vector<int> vec;

    int loop = 0;
    while (y > 9)
    {
        int mod = y %10;
        if(mod > 4) mod=9-mod;
        vec.push_back(mod);
        y = y / 10;
    }
    if(y !=9 && y > 4) y=9-y;
    vec.push_back(y);
    
    for (int i = vec.size()-1; i >= 0; i--)
    {
        cout << vec[i] ;
    }
    
    cout << endl;

    return 0;
}