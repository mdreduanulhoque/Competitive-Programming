// Problem: https://codeforces.com/contest/1351/problem/B

#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2 ;

        if(b1 > a1)    swap(b1,a1);
        if(b2 > a2)    swap(b2,a2);

        if(a1 == a2) {
            if(b1+b2 == a1)    cout << "YES" << endl;
            else    cout << "NO" << endl;
        }else if(b1 == b2){
            if(a1+a2 == b1)    cout << "YES" << endl;
            else    cout << "NO" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    






    return 0;
}