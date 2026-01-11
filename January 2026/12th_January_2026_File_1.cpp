// Problem / Topic: https://codeforces.com/problemset/problem/1/A

/*
    New learning: Draw before thinking
                  cout << << endl; can't handle long long by it self
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,a;
    cin >> n >> m >> a;
    long long res = ceil((float)n/a)*ceil((float)m/a);
    cout << res << endl;

    return 0;
}