N, K = map(int, input().split())

items = []
for i in range(N):
    W, V = map(int, input().split())
    items.append((W, V))

dp = []
for i in range(N + 1):
    row = []
    for j in range(K + 1):
        row.append(0)
    dp.append(row)

# DP 테이블 채우기
for i in range(1, N+1):
    weight, value = items[i-1]  # i번째 물건 (0-indexed이므로 i-1)
    
    for w in range(1, K+1):
        if weight <= w:  # 현재 물건을 넣을 수 있으면
            # 넣지 않는 경우 vs 넣는 경우 중 최대값
            dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight] + value)
        else:  # 현재 물건을 넣을 수 없으면
            dp[i][w] = dp[i-1][w]

print(dp[N][K])