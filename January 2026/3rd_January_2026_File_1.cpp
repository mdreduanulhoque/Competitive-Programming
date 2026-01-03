// Problem / Topic: https://codeforces.com/problemset/problem/26/A

/*
    New learning: Optimized way for Prime number
    Time Complexity O(N log log N).
*/


#include <bits/stdc++.h>
using namespace std;

int isPrime(int k)
{
    if(k > 1 && k <= 3){
        return 1;
    }

    if (k % 2 == 0 || k % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= k; i += 6)
    {
        if (k % i == 0 || k % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int n;
    cin >> n;
    
    int count = 0;
    for (int t = 1; t <= n; t++)
    {
        int pDivisor = 0;
        for (int i = 2; i <= t; i++)
        {
            if (t % i == 0 && isPrime(i) == 1)
            {
                pDivisor++;
            }
        }
        if(pDivisor == 2){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}