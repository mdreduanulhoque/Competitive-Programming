// Problem: https://vjudge.net/contest/783346#problem/P

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    string str;
    cin >> str;

    int len = str.length();

    int digit = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')  digit++;
    }
    
    int up = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')  up++;
    }

    int down = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')  down++;
    }

    int sp = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '+')  sp++;
    }

    int need = 0;
    if(digit == 0)    need++;
    if(up == 0)     need++;
    if(down == 0)   need++;
    if(sp == 0)     need++;
    if(len+need < 6)    need+=(6-(len+need));
    
    cout << need << endl;

    return 0;
}