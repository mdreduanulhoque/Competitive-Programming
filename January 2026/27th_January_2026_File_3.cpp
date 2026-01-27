// Problem: https://codeforces.com/contest/118/problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    cin>> str;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i]+32;
        }
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            str.erase(str.begin()+i);
            i--;
        }
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        if(i%2 == 0){
            str.insert(str.begin()+i,'.');
        }
    }
    

    cout << str << endl;



    return 0;
}