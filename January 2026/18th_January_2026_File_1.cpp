// Problem / Topic: Vector-Sort

/*
    New learning: 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> vec;

    while (n--)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    sort(vec.begin(),vec.end());

    for(int i : vec){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}