// Problem: https://codeforces.com/contest/1800/problem/A
// Status: Unsolved

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
        
        for (int i = 0; i < n; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
            }
        }

        for (int i = 0; i < str.size()-1; i++)
        {
            if(str[i] == str[i+1]){
                str.erase(str.begin()+i);
                i--;
            }
        }

        
        int flag = 0;
        if(str.size() < 4){
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < str.size()-3; i++)
        {
            if(str[i] == 'm' && str[i+1] == 'e' && str[i+2] == 'o' && str[i+3] == 'w'){
                flag = 1;
                break;
            }
        }

        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] != 'm' && str[i] != 'e' && str[i] != 'o' && str[i] != 'w'){
                flag = 0;
                break;
            }
        }

        if(flag == 0)    cout << "NO" << endl;
        else    cout << "YES" << endl;
        
    }
    






    return 0;
}