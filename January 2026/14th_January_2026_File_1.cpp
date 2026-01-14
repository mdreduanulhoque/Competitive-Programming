// Problem / Topic: https://codeforces.com/problemset/problem/1520/C

/*
    New learning: Pure Logic 😒
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
        }else if(n == 2){
            cout << -1 << endl;
        }else{
            int k = 1;
            int l = 2;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(k > n*n)    k = 0;
                    if(l > n*n)    l = 0;
                    if(k != 0){
                        cout << k << " ";
                        k+=2;
                    }
                    if(k == 0 && l != 0){
                        cout << l << " ";
                        l+=2;
                    }
                }
                cout << endl;
            }
            
        }
    }

    return 0;
}