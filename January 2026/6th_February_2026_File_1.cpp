// Problem: https://vjudge.net/contest/786078#problem/T

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    map<string, int> d;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int num;
        cin >> num;
        d.insert({s,num});
    }
    
    string str;
    while (cin >> str)
    {
        auto it = d.find(str);
        if(it != d.end()){
            cout << (*it).first << "=" << (*it).second << endl;
        }else{
            cout << "Not found" << endl;
        }
    }
    


    return 0;
}