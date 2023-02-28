#include <bits/stdc++.h>

using namespace std;

string a[10][10];
int main()
{
    int m, n; cin >> m >> n;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[j][i];
        }
    }

    int x[8] = {1,0,1,-1,-1,1,-1,0};
    int y[8] = {0,1,1,-1,1,-1,0,-1};

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            int cnt = 0;
            if(a[j][i] == "*"){
                cout << "*" << " ";
            }
            else if(i >= 1 && j >= 1 && i <= m && j <= n){
                for(int k = 0; k < 8; k++){
                    int i1 = i + y[k];
                    int j1 = j + x[k];
                    if(a[j1][i1] == "*"){
                        cnt++;
                    }
                }
                cout << char('0'+cnt) << " ";
            }
        }
        cout << endl;
    }


}