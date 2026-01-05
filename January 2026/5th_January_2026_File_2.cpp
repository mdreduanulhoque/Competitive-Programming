// Problem / Topic: https://codeforces.com/contest/1873/problem/C

/*
    New learning: Use math where possiable
*/

#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin >> t;
    while(t--){
        int point = 0;
        for (int i = 0; i < 10; i++)
        {
            string str;
            cin >> str;
            for (int j = 0; j < 10; j++)
            {
                if(str[j] == 'X'){
                    int minDistance = min(i,min(j,min(abs(9-i),abs(9-j))));
                    point+=(minDistance+1);
                }
            }
            
        }
        cout << point << endl;
        
    }




    return 0;
}