#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string tmp = "";

    for(int i = s.size()-1; i >= 0; i--)
    {    
        tmp += s[i];
    }
    if(tmp != s)
        cout << "No";
    else
        cout << "Yes";
}