// Problem: https://vjudge.net/contest/781806#problem/J

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        
        int maxe = vec[0];
        int smaxe = INT_MIN;

        for (int i = 0; i < vec.size(); i++)
        {
            if(vec[i] > maxe){
                smaxe = maxe;
                maxe = vec[i];
            }else if(vec[i] > smaxe && vec[i] < maxe){
                smaxe = vec[i];
            }
        }
        cout << maxe+smaxe << endl;

    }



    return 0;
}