// Problem: https://vjudge.net/contest/786078#problem/M
// Status: Login error

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    map<string, string> m;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        string str;
        cin >> str;
        auto it = m.find(to_string(x)+to_string(y));
        if(it == m.end()){
            m.insert({to_string(x)+to_string(y),str});
        }else{
            m[to_string(x)+to_string(y)] = str;
        }
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        auto it = m.find(to_string(x)+to_string(y));
        cout << (*it).second << endl;
        
    }
    




    return 0;
}