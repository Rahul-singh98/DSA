#include <bits/stdc++.h>
using namespace std;

void shortest_distance(vector<vector<int>> &matrix)
{
    int INF = INT_MAX;
    int n = matrix.size();

    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][k] < INF && matrix[k][j] < INF and matrix[i][k] + matrix[k][j] < INF)
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
}