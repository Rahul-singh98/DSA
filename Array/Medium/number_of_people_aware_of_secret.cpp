// https://leetcode.com/problems/number-of-people-aware-of-a-secret/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        vector<int> arr(n + 1, 0);
        arr[0] = 1;
        int ans = 0, MOD = 1e9 + 7;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + delay; j <= n && j < i + forget; j++)
                arr[j] = (arr[j] + arr[i]) % MOD;

            if (i + forget >= n)
                ans = (ans + arr[i]) % MOD;
        }

        return ans;
    }
};

int main()
{
    return 0;
}