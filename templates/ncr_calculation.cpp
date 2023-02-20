#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;

int binomialCoeff(int n, int k)
{
    if(k > n) return 0;

    int C[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = ((long)C[i - 1][j - 1] + C[i - 1][j])%MOD;
        }
    }
 
    return C[n][k];
}