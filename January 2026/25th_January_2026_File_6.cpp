// Problem: https://codeforces.com/contest/2193/problem/C
// Status: Unsolved

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> a;
        vector<int>b;
        for (int i = 0; i < n; i++)
        {
            int o; 
            cin >> o;
            a.push_back(o);
        }
        
        for (int i = 0; i < n; i++)
        {
            int o; 
            cin >> o;
            b.push_back(o);
        }


        for (int i = 0; i < q; i++)
        {
            int l,r;
            cin >> l >> r;
            
            vector<int> c = a;

            int sum = 0;
            for (int j = l; j <= r; j++)
            {
                if(c[j] < b[j]) c[j] = b[j];
                if(j < n-1 && c[j]<c[j+1]) swap(c[j],c[j+1]);
                sum+=c[j];
            }
            cout << sum << endl;

        }
        

        

    }
    




    return 0;
}