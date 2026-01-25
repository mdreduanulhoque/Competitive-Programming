// Problem: 

#include<bits/stdc++.h>
using namespace std;

int hasd(string d){
    for (int i = 0; i < d.size()-1; i++)
    {
        if(d[i] == d[i+1])  return i;
    }
    return -1;
}

int main(){

    string str;
    cin >> str;

    int i = hasd(str);
    while (i >= 0)
    {
        str.erase(i,2);
        if(str.empty()) break;
        i = hasd(str);
    }
    
    if(str.empty()){
        cout << "Empty String" << endl;
    }else{
        cout << str << endl;
    }



    return 0;
}