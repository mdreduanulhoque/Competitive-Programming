// Problem: https://codeforces.com/contest/1832/problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        
        string str;
        cin >> str;
        
        if(str.size() < 4){
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;
        for (int i = 0; i < (str.size()/2)-1; i++)
        {
            if(str[i] != str[i+1]){
                flag = 1;
                break;
            }
        }
        
        if(flag)    cout << "YES" << endl;
        else    cout << "NO" << endl;

    }
    






    return 0;
}