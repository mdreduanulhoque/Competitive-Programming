// Problem: https://codeforces.com/contest/1850/problem/C

#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char c;
                cin >> c;
                arr[i][j] = c;
            }
            
        }

        vector<char> vec;

        for (int j = 0; j < 8; j++)
        {
            for (int i = 0; i < 8; i++)
            {
                if(arr[i][j] != '.'){
                    vec.push_back(arr[i][j]);
                }
            }
            
        }
        
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] ;
        }
        
        cout << endl;


    }
    






    return 0;
}