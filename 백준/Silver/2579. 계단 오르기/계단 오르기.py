N = int(input())
stair = []

for i in range (N):
    val = int(input())
    stair.append(val)

dp = []
dp = [[0] * 2 for _ in range (N)]

dp[0][0] = stair[0]
dp[0][1] = stair[0]

if N > 1:
    dp[1][0] = stair[1]
    dp[1][1] = stair[0] + stair[1]

for i in range(2, N):
    dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + stair[i]
    dp[i][1] = dp[i-1][0] + stair[i]

answer = max(dp[N-1][0], dp[N-1][1])

print(answer)