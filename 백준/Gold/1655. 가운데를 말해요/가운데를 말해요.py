import sys
import heapq

input = sys.stdin.readline

max_heap = []
min_heap = []

N = int(input())

for i in range(N):
    val = int(input())

    if len(max_heap) == 0 or val < -max_heap[0]:
        heapq.heappush(max_heap, -val)
    else:
        heapq.heappush(min_heap, val)

    # 값을 넣은 후, 균형 체크 및 조정
    if len(max_heap) > len(min_heap) + 1:
        # 최대힙이 너무 많으면 최소힙으로 옮기기
        heapq.heappush(min_heap, -heapq.heappop(max_heap))
    elif len(min_heap) > len(max_heap):
        # 최소힙이 더 많으면 최대힙으로 옮기기
        heapq.heappush(max_heap, -heapq.heappop(min_heap))

    root_value = -max_heap[0]
    print(root_value)
    