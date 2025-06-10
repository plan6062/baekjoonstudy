import sys
input = sys.stdin.readline

a = input().strip()
b = input().strip()
dp = []
for i in range(len(a) + 1):
    row = []
    for j in range(len(b) + 1):
        row.append(0)
    dp.append(row)

for i in range(1, len(a) + 1):
    for j in range(1, len(b) + 1):
        if a[i-1] == b[j-1]:  # 문자가 같으면
            dp[i][j] = dp[i-1][j-1] + 1
        else:  # 문자가 다르면
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])

# print(dp)
print(dp[len(a)][len(b)])


