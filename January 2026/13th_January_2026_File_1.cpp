// Problem / Topic: https://codeforces.com/contest/2184/problem/A

/*
    New learning: Find Starting edge cases
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n <= 3){
            cout << n << endl;
        }else{
            cout << n%2 << endl;
        }
    }
    



    return 0;
}