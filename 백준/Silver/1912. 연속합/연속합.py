N = int(input())
sequence = list(map(int, input().split()))

# DP 테이블 초기화
dp = [0] * N
dp[0] = sequence[0]  # 첫 번째 원소

# DP 점화식 적용
for i in range(1, N):
    dp[i] = max(sequence[i], dp[i-1] + sequence[i])


# 전체 DP 테이블에서 최댓값이 답
print(max(dp))