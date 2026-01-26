// Problem: https://atcoder.jp/contests/abc288/tasks/abc288_b

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin >> n >> k;

    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    
    sort(vec.begin(),vec.begin()+k);

    for (int i = 0; i < k; i++)
    {
        cout << vec[i] << endl;
    }
    



    return 0;
}