// Problem / Topic: Kadane's algorithm

/*
    New learning: Maximum sub-array sum
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {3,6,-9,3,7};
    
    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < 5; i++)
    {
        currSum = max(arr[i], currSum+arr[i]);
        if(currSum > maxSum) maxSum = currSum;
    }
    

    cout << maxSum << endl;


    return 0;
}
