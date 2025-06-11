import sys
input = sys.stdin.readline

N = int(input())
color = []
dp = [0] * N  

for i in range(N):
    r, g, b = list(map(int, input().split()))
    color.append([r, g, b])  # 리스트로 묶어서 추가

dp = [[0] * 3 for _ in range(N)]

dp[0][0] = color[0][0]
dp[0][1] = color[0][1]
dp[0][2] = color[0][2]

for i in range (1, N):
    dp[i][0] = color[i][0] + min(dp[i-1][1], dp[i-1][2]) 
    dp[i][1] = color[i][1] + min(dp[i-1][0], dp[i-1][2])
    dp[i][2] = color[i][2] + min(dp[i-1][0], dp[i-1][1])

print(min(dp[N-1]))
