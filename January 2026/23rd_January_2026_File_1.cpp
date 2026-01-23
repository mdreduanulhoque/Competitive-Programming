// Prooblem: https://codeforces.com/contest/1165/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
   
    sort(vec.begin(), vec.end());

    int ans = 1;
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i] >= ans){
            ans++;
        }
    }
    
    cout << ans - 1 <<  endl;

    return 0;
}