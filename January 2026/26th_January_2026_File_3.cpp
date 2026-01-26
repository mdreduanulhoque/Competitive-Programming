// Problem: https://codeforces.com/contest/1925/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("%c",j+96);
            }
            
        }
        cout << endl;
    }
    





    return 0;
}