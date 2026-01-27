// Problem: https://codeforces.com/contest/1805/problem/B

#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin >> n;
        string str;
        cin >> str;

        int m = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] <= str[m]){
                m = i;
            }
        }
        
        char mi = str[m];

        str.erase(str.begin()+m);
        str.insert(str.begin(), mi);

        cout << str << endl;

    }
    






    return 0;
}