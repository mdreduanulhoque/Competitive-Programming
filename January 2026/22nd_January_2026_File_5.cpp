// Problem: 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> vec;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    
    int strike = 1;
    int maxx = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(vec[i+1] >= vec[i]){
            strike++;
            maxx = max(strike,maxx);
        }else{
            strike = 1;
        }
        
    }
    


    cout << maxx << endl;




    return 0;
}