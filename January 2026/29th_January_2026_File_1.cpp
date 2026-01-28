// Problem: https://codeforces.com/problemset/problem/816/B
// Status: Unsolved due to TLE

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,k,q;

    cin >> n >> k >> q;

    vector<int> low(n, 0);
    vector<int> high(n, 0);
    
    for (int i = 0; i < n; i++)
    {
        int l,r;
        cin >> l >> r;
        low[i] = l;
        high[i] = r;
    }
    
    int s = *(min_element(low.begin(),low.end()));
    int h = *(max_element(high.begin(), high.end()));
    int countSize = h - s;
    vector<int> count (countSize+1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = low[i] - s; j <= high[i]-s; j++)
        {
            count[j]++;
        }
    }
    

    for (int i = 0; i < q; i++)
    {
        int c = 0;
        int a ,b;
        cin >> a >> b;
        if(a < s)   a = s;
        if(b > h)    b = h;
        for (int j = a-s; j <= b-s; j++)
        {
            if(count[j] >= k)   c++;
        }

        cout << c << endl;
        
    }
    





    return 0;
}