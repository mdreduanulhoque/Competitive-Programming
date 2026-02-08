// Problem: https://codeforces.com/contest/702/problem/B
// Status: Unsolved

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            float x = log(vec[i]+vec[j])/(log(2)*1.0);
            if(x == int(x)){
                cnt++;
            }
        }
        
    }
    
    
    cout << cnt << endl;

    return 0;
}