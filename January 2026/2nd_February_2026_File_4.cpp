// Problem: https://vjudge.net/contest/786080#problem/D

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<pair<pair<int,int>,int>> p;

    for (int i = 0; i < n; i++)
    {
        int h,m,s;
        cin >> h >> m >> s;
        p.push_back({{h,m},s});
    }
    
    sort(p.begin(),p.end());

    for(pair<pair<int,int>,int> i : p){
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }

    return 0;
}