// Problem: https://atcoder.jp/contests/abc353/tasks/abc353_a

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> vec;

    for (int  i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    

    for (int i = 0; i < n; i++)
    {
        if(vec[i] > vec[0]){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;


    return 0;
}