// Problem: https://atcoder.jp/contests/abc371/tasks/abc371_b?lang=en

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,f;
    cin >> n >> f;

    vector<int> vec(n+1, 0);

    for (int i = 0; i < f; i++)
    {
        int x;
        cin >> x;
        char c;
        cin >> c;
        if(vec[x] == 0 && c == 'M'){
            cout << "Yes" << endl;
            vec[x] = 1;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}