// Problem: https://vjudge.net/contest/786080#problem/E
// Status: unsolved

#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        vector<pair<int,int>> p;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            scanf("%d",&x);
            scanf("%d",&y);
            p.push_back({x,y});
        }
        
       for (int i = 0; i < n-1; i++)
       {
            for (int j = i+1; j < n; j++)
            {
                if(p[i].first > p[j].first){
                    swap(p[i],p[j]);
                }else if((p[i].first == p[j].first) && (p[i].second < p[j].second)){
                    swap(p[i],p[j]);
                }
            }  
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d %d\n",p[i].first,p[i].second );
        }
        
       

    }
    






    return 0;
}