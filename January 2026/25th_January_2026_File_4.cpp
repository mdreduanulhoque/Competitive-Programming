// Problem: https://codeforces.com/contest/1481/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int px,py;
        cin >> px >> py;
        string str;
        cin >> str;

        int x = 0;
        int y = 0;

        if(px == 0 && py == 0){
            cout << "YES" << endl;
            continue;
        }

        if(px > 0){
            for(char r : str){
                if(r == 'R')    x++;
            }
        }else{
            for(char r : str){
                if(r == 'L')    x++;
            }
        }

        if(py > 0){
            for(char r : str){
                if(r == 'U')    y++;
            }
        }else{
            for(char r : str){
                if(r == 'D')    y++;
            }
        }

        if(x >= abs(px) && y >= abs(py) ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    




    return 0;
}