// Problem / Topic: https://codeforces.com/problemset/problem/304/A

/*
    New learning: Use sqrt as minimum as possiable. It iterates every floating values
                  and increases time complexity
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cin >> n;

    int count = 0;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            int val = i*i - j*j;
            int root = sqrt(val);
            if(root*root == val && root > 0 && root <= j) count++;
        }
        
    }
    cout << count << endl;



    return 0;
}