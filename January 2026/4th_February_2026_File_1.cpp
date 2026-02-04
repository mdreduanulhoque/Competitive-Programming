// Problem: https://vjudge.net/contest/786080#problem/H

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<pair<pair<string,string>,int>> p;

    for (int i = 0; i < n; i++)
    {
        string name, surname;
        cin >> name >> surname;
        int year;
        cin >> year;
        p.push_back({{surname,name},year});
    }

    sort(p.begin(),p.end());

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(p[i].first.first == p[j].first.first && p[i].first.second == p[j].first.second){
                if(p[i].second < p[j].second){
                    swap(p[j],p[i]);
                }
            }
        }
        
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first.second << " " << p[i].first.first << " " << p[i].second << endl;
    }
    


    return 0;
}