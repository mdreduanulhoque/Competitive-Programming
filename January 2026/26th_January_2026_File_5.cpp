// Problem: 

#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    cin >> str;

    int check = 0;

    for (int i = 1; i < str.size()-1; i++)
    {
        if(str[i] >= '0' && str[i] <= '9'){

        }else{
            check++;
        }
    }
    

    if((str[0] >= 'A' && str[0] <= 'Z') && (str[str.size()-1] >= 'A' && str[str.size()-1] <= 'Z') && str.size() == 8 && str[1] != '0' && check == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }






    return 0;
}