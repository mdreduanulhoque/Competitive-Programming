// Problem: https://codeforces.com/contest/381/problem/A

#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin >> n;
    
    vector<int> vec;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }


    int sadia = 0;
    int dipa = 0;

    int l = 0;
    int r = n-1;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            if(vec[l] > vec[r]){
                sadia+=vec[l];
                l++;
            }else{
                sadia+=vec[r];
                r--;
            }
        }else{
            if(vec[l] > vec[r]){
                dipa+=vec[l];
                l++;
            }else{
                dipa+=vec[r];
                r--;
            }
        }
    }
    

    cout << sadia << " " << dipa << endl;


    return 0;
}