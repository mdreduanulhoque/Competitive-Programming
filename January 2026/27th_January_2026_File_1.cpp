// Problem: https://codeforces.com/problemset/problem/1779/A

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

        int flag = 0;

        for (int i = 0; i < n-1; i++)
        {
            if(str[i] == 'R' && str[i+1] == 'L'){
                cout << 0 << endl;
                flag = 1;
                break;
            }else if(str[i] == 'L' && str[i+1] == 'R'){
                cout << i+1 << endl;
                flag = 1;
                break;
            }
        }if(flag == 0)  cout << -1 << endl;
        
    }
    



    return 0;
}