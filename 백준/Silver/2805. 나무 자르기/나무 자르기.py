import sys
import bisect
input = sys.stdin.readline

N, M = map(int, input().split())
tree = list(map(int, input().split()))
tree.sort()

left = 0
right = tree[-1]
answer = 0

while left <= right:
    H = (left + right) // 2
    
    # H보다 큰 첫 번째 위치 찾기
    idx = bisect.bisect_right(tree, H)
    
    # idx부터 끝까지의 나무들에서 H만큼 빼기
    total = sum(tree[i] - H for i in range(idx, len(tree)))
    
    if total >= M:
        answer = H
        left = H + 1
    else:
        right = H - 1

print(answer)