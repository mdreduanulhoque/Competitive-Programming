// Problem: https://codeforces.com/contest/4/problem/C

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        auto it = m.find(str);

        if(it == m.end()){
            m.insert({str,0});
            cout << "OK" << endl;
        }else{
            m[str]++;
            cout << str + to_string(m[str]) << endl;
        }
    }
    


    return 0;
}