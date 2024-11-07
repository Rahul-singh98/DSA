#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
            ans++;

    return ans;
}

int main()
{
    int tc;
    cin >> tc;
    for (int c = 1; c <= tc; c++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Case #" << c << ": " << solve(arr, n) << endl;
    }
    return 0;
}