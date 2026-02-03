// Problem: https://codeforces.com/contest/514/problem/B
// Unsolved 

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,x0,y0;
    cin >> n >> x0 >> y0;

    vector<pair<int,int>> p;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        p.push_back({x,y});
    }

    vector<int> m;

    for (int i = 0; i < n; i++)
    {
        if(p[i].first-x0 == 0){
            auto it = find(m.begin(),m.end(),0);
            if(it == m.end()){
                m.push_back(0);
            }
            continue;
        }
        int k = ((p[i].second-y0)/(p[i].first-x0));
        auto it = find(m.begin(),m.end(),k);
        if(it == m.end()){
            m.push_back(k);
        }
    }
    
    cout << m.size() << endl;


    return 0;
}