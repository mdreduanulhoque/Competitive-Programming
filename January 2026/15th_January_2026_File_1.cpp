// Problem / Topic: https://codeforces.com/problemset/problem/381/A

/*
    New learning: Need Optimization
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> vec;
    
    while(n--){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int left = 0;
    int right = vec.size()-1;

    int sanjida = 0;
    int dipa = 0;

    if(vec[right] >= vec[left]){
        sanjida += vec[right];
        right--;
    }else{
        sanjida += vec[left];
        left++;
    }
  

    int sanjidas_turn = 1;
    int dipas_turn = 0;

    while(left <= right){
        if(sanjidas_turn == 0){
            if(vec[right] >= vec[left]){
                sanjida += vec[right];
                right--;
            }else{
                sanjida += vec[left];
                left++;
            }
            sanjidas_turn = 1;
            dipas_turn = 0;
        }
        else if(dipas_turn == 0){
            if(vec[right] >= vec[left]){
                dipa += vec[right];
                right--;
            }else{
                dipa += vec[left];
                left++;
            }
            dipas_turn = 1;
            sanjidas_turn = 0;
        }
    }

    cout << sanjida << " " << dipa << endl;

    return 0;
}