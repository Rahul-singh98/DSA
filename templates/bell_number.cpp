#include<bits/stdc++.h>
using namespace std;

int bellNumber(int n)
{
    int bell[n][n+1];
    bell[0][0] = 1;
    int mod = 1e9+7;
    
    for(int i = 1; i <n; i++) {
        bell[i][0] = bell[i-1][i-1];
        
        for(int j = 1; j <= n; j++) bell[i][j] = ((long) bell[i][j-1] + bell[i-1][j-1]) % mod;
    }
    
    return bell[n-1][n-1];
}