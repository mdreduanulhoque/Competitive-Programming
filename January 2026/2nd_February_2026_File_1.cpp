// Problem: https://vjudge.net/contest/786080#problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    

    pair<int,int> p;
    cin >> p.first >> p.second ;

    if(p.first+p.second+(p.first*p.second) == 111){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    return 0;
}