// Problem: https://codeforces.com/contest/2193/problem/B
// Status: Unsolved

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            vec[i] = x;
        }
        
        int l = -1, r = -1;
        int nmax = -1;
        
        for(int i = 0; i < n; i++){
            if(l != -1 && vec[i] > vec[l]){
                r = i;
            }
            if(vec[i] != n-i && l==-1){
                l = i;
            
            }
        }
        
        reverse(vec.begin()+l, vec.begin()+r);
        
        for(int i = 0; i < vec.size();i++){
            cout << vec[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}

/*
1
5
1
4
3
5
2
*/
