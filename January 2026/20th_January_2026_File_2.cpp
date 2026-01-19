// Problem / Topic: https://vjudge.net/contest/781806#problem/D

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin >> n >> k;

    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    int count = 0;

    for(int q : arr){
        if(q >= arr[k-1] && q > 0)    count++;
    }

    cout << count << endl;

    return 0;
}