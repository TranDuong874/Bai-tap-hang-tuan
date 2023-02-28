#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n; cin >> n >> m;
    int index;

    char mat[n][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[j][i];
        }
    }

    for(int i = 0; i < m-1; i++){
        for(int j = 0; j < n; j++){
            
            if(mat[j][i] == 'Y')
            {
                
                for(int k = -1; k <= 1; k++){
                    if(j+k >= 0 && j+k < n && mat[j+k][i+1] == 'E' && mat[j+k][i] != 'R')
                    {
                        mat[j+k][i+1] = 'Y';
                    }
                }
                
            }
            
        }
    }





    for(int j = 0; j < n; j++){
        if(mat[j][m-1] == 'Y'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
}