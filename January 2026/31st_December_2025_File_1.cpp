// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    char str[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char l;
            cin >> l;
            str[i][j] = l;
        }
    }


    int g,p;
    cin >> g >> p;

    int x = g-1;
    int y = p-1;

    int flag = 1;

    if(x-1 >= 0 && str[x-1][y] != 'x'){
        flag = 0;
    }else if(x+1 < n && str[x+1][y] != 'x'){
        flag = 0;
    }else if(y+1 < m && str[x][y+1] != 'x'){
        flag = 0;
    }else if(y-1 >= 0 && str[x][y-1] != 'x'){
        flag = 0;
    }else if((x-1 >= 0 && y+1 < m) && str[x-1][y+1] != 'x'){
        flag = 0;
    }else if((x-1 >= 0 && y-1 >= 0) && str[x-1][y-1] != 'x'){
        flag = 0;
    }else if((x+1 < n && y-1 >= 0) && str[x+1][y-1] != 'x'){
        flag = 0;
    }else if((x+1 < n && y+1 < m) && str[x+1][y+1] != 'x'){
        flag = 0;
    }

    if(flag == 1){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }



    return 0;
}