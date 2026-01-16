// Status: Unsolved

// Problem / Topic: https://codeforces.com/problemset/problem/379/A

/*
    New learning: Frustration
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin >>a >> b;

    int total = a;
    int go = 1;
    while (go != 0)
    {
        if(a >= b){
            if (a%b > b/2)
            {
                total++;
            }
            
            total += (a/(b*1.0));
            a = (a/(b*1.0));
        }else{
            go = 0;
        }
    }
    
    cout << total << endl;



    return 0;
}
