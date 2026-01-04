// Problem / Topic: https://codeforces.com/problemset/problem/1886/A

/*
    New learning: Observation matters\in math
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
        
        if(n < 7){
            cout << "NO" << endl;
        }else{
            if(n%3 != 0 && (n-3 != 1) && (n-3 != 2)){
                cout << "YES\n1 2 " << (n-3) << endl;
            }else if((n-5 != 1) && (n-5 != 4)){
                cout << "YES\n1 4 " << (n-5) << endl;
            }else{
                cout << "NO"<< endl;
            }
        }
    }
    


    return 0;
}