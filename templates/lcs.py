def lcs(self, x, y, s1, s2):
    dp = [[0 for _ in range(y+1)] for _ in range(x+1)]

    for i in range(1, x+1):
        for j in range(1, y+1):
            if s1[i-1] == s2[j-1]:
                dp[i][j] = 1 + dp[i-1][j-1]
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    return dp[x][y]
