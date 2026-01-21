// Problem / Topic: https://vjudge.net/contest/781806#problem/H

/*
    New learning: 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> vec;
        while (n--)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }

        int flag = 0;

        sort(vec.begin(),vec.end());

       for (int i = 0; i <= vec.size()-3; i++)
       {
            if(vec.size() < 3){
                break;
            }

            if(vec[i] == vec[i+1] && vec[i] == vec[i+2]){
                flag = 1;
                cout << vec[i] << endl;
                break;
            }
       }
       if(flag == 0){
            cout << -1 << endl;
       }
       
    }



    return 0;
}