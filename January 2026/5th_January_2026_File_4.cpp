
// Problem / Topic: https://atcoder.jp/contests/abc311/tasks/abc311_b

/*
    New learning: Usage of Kadane's Algorithm
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int d;
    cin >> d;

    string arr[n];

    for(int i = 0; i < n;i++){
        string str;
        cin >> str;
        arr[i] = str;
    }

    int count[d];

    for(int i = 0; i < d;i++){
        int free = 1;
        for (int j = 0; j < n; j++)
        {
            if(arr[j][i] == 'x'){
                free = 0;
                break;
            } 
        }
        count[i] = free;
    }

    int maxSum = count[0];
    int currSum = count[0];
    for (int i = 1; i < d; i++)
    {
        if(count[i] == 0) currSum = 0;
        currSum = max(count[i], currSum + count[i]);
        if(currSum > maxSum) maxSum = currSum;
    }
    cout << maxSum << endl;


    return 0;
}