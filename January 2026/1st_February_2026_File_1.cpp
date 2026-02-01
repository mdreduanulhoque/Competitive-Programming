// Topic: Prefix Sum
// https://codeforces.com/blog/entry/146389

#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "Enter size: ";

    int n;
    cin >> n;

    cout << "Enter Elements: ";
    vector<int>vec(n+1);
    vector<int>presum(n+1);

    vec[0] = 0;
    presum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 1; i <= n; i++)
    {
        presum[i] = vec[i] + presum[i-1];
    }
    
    cout << "Enter Range (0 based): ";

    int l,r;
    cin >> l >> r;

    cout << presum[r+1]-presum[l];


    return 0;
}