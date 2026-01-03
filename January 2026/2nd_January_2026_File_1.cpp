// Problem: https://codeforces.com/problemset/problem/598/A

/*
    New learning: Finding elements for power of n
*/

#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        long long sum_1_to_x = (x*(x+1))/2;
        long long sum_power_of_2 = 0;

        for (long long i = 1; i <= x; i*=2)
        {
            sum_power_of_2 += i;
        }
        
        cout << sum_1_to_x - sum_power_of_2 - sum_power_of_2<< endl;
    }
    



    return 0;
}