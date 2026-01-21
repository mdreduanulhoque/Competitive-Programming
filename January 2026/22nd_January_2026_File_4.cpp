// Problem: https://atcoder.jp/contests/abc373/tasks/abc373_c?lang=en

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> vec1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    

    vector<int> vec2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec2.push_back(x);
    }

    auto mm1 = max_element(vec1.begin(),vec1.end());
    auto mm2 = max_element(vec2.begin(),vec2.end());
    long long res = *mm1 + *mm2;
    
    cout << res << endl;

    return 0;
}