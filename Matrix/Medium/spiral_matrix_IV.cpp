// https://leetcode.com/problems/spiral-matrix-iv/
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> res(m);
        for (int i = 0; i < m; i++)
        {
            res[i].resize(n);
            for (int j = 0; j < n; j++)
                res[i][j] = -1;
        }
        int mv[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0, dir = 0;
        while (1)
        {
            if (!head)
                break;
            res[x][y] = head->val;
            head = head->next;
            int ex = x + mv[dir][0], ey = y + mv[dir][1];
            int flag = 1;
            if (ex < 0 || ex >= m || ey < 0 || ey >= n)
                flag = 0;
            else if (res[ex][ey] != -1)
                flag = 0;
            if (flag)
                x = ex, y = ey;
            else
            {
                dir = (dir + 1) % 4;
                ex = x + mv[dir][0], ey = y + mv[dir][1];
                x = ex, y = ey;
            }
        }
        return res;
    }
};

int main()
{
    return 0;
}