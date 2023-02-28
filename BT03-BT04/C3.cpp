#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t; 
    int a, b; 
    while(t--)
    {
        cin >> a >> b;
        int cnt = 0;
        for(int i = a; i <= b; i++)
        {
            string str = to_string(i);
            string tmp = "";
            for(int j = str.size()-1; j >=0; j--)
            {
                tmp += str[j];
            }
            if(tmp == str){
                cnt++;
            }

        }
        cout << cnt << endl;
    }
}