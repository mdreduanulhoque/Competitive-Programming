// Problem / Topic: https://codeforces.com/problemset/problem/199/A

/*
    New learning: Use math to make O(n^3) to O(n^2), replace the third parameter
                  with mathmaticla variable
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>vec;

    int n;
    cin >> n;

    int f = 0;
    int s = 1;
    int t = f + s;
    vec.push_back(0);
    vec.push_back(1);
    
    while(t <= n){
        if(t == n){
            break;
        }
        t = f + s;
        vec.push_back(t);
        f = s;
        s = t;
    }

    int flag = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            auto it = find(vec.begin(),vec.end(),n-vec[i]-vec[j]);
            if(it != vec.end()){
                cout << vec[i] << " " << vec[j] << " " << n-vec[i]-vec[j] << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1)   break;
    }
    
    if(flag == 0){
        cout << "I'm too stupid to solve this problem" << endl;
    }





    return 0;
}