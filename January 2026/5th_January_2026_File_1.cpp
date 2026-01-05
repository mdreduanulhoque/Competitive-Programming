// Problem / Topic: https://codeforces.com/contest/1915/problem/B

/*
    New learning: If input size is fixed it can be manipulated
*/

#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin >> t;
    while(t--){
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            string str;
            cin >> str;
            for (int j = 0; j < 3; j++)
            {
                if(str[j] == 'A') a++;
                if(str[j] == 'B') b++;
                if(str[j] == 'C') c++;
            }
            
        }
        if(a != 3) cout << "A" << endl;
        else if(b != 3) cout << "B" << endl;
        else cout << "C" << endl;
    }


    return 0;
}