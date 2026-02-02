// Problem: https://codeforces.com/contest/44/problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<pair<string,string>> p;

    for (int i = 0; i < n; i++)
    {
        string specis, color;
        cin >> specis >> color;
        p.push_back({specis,color});
    }

    sort(p.begin(),p.end());
    p.erase(unique(p.begin(),p.end()),p.end());
    
    cout << p.size() << endl;




    return 0;
}