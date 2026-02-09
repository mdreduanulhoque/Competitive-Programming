// Problem: https://vjudge.net/contest/786078#problem/O
// Status: In Queue

#include<bits/stdc++.h>
using namespace std;


int main(){

    map<int,int> p;
    vector<int> s;

    int n;
    while (cin >> n)
    {
        auto it = p.find(n);
        if(it == p.end()){
            p.insert({n,1});
            s.push_back(n);
        }else{
            (*it).second++;
        }
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " " << p[s[i]] << endl;
    }
    

    return 0;
}