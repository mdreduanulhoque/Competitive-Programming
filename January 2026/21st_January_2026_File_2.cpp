// problem: https://atcoder.jp/contests/arc087/tasks/arc087_a?lang=en

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

    sort(vec.begin(),vec.end());
    
    vector<pair<int,int>> count;
    count.push_back({vec[0],0});
    
    for (int i = 0; i < n-1; i++)
    {
        if(vec[i] != vec[i+1]){
            count.push_back({vec[i+1],0});
        }
    }

    for (int i = 0; i < count.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < vec.size(); j++)
        {
            if(count[i].first == vec[j]){
                c++;
            }
        }
        count[i].second = c;
        
    }
    
    int rubbish = 0;
    for (int i = 0; i < count.size(); i++)
    {
        if(count[i].first < count[i].second){
            rubbish += (count[i].second - count[i].first);
        }
        else if(count[i].first > count[i].second){
            rubbish += count[i].second;
        }
        
    }
    
    cout << rubbish << endl;

    return 0;
}