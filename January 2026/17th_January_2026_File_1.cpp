// Problem:  https://codeforces.com/problemset/problem/379/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin >>a >> b;

    int total = a;
    
    while(a >= b){
        int div = a/b;
        total += div;
        int rem = a % b;
        a = div + rem;
    }
    
    cout << total << endl;



    return 0;
}
