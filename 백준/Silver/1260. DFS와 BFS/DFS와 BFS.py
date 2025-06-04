import sys
from collections import deque

input = sys.stdin.readline


N, M, V = map(int, input().split())
E = []
graph = []

for i in range(M):
    edge = list(map(int, input().split()))
    E.append(edge) # 튜플로 리스트에 저장

for i in range(N+1): # 0번 인덱스는 안 쓰므로 메모리 1칸 낭비
    graph.append([])

for a, b in E: # E의 튜플을 인접 리스트로 구현
    graph[a].append(b)
    graph[b].append(a)

for i in range (1, N+1): # 인접 리스트 내부 인덱스 정렬
    graph[i].sort()

def dfs(start):
    visited = [False] * (N+1)
    result = []
    
    def dfs_recursive(node):
        visited[node] = True
        result.append(node)
        for neighbor in graph[node]:
            if not visited[neighbor]:
                dfs_recursive(neighbor)
    
    dfs_recursive(start)
    return result



def bfs(start):
    visited = [False] * (N+1)
    result = []
    queue = deque([start])
    visited[start] = True
    
    while queue:
        node = queue.popleft()
        result.append(node)
        for neighbor in graph[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
    
    return result

print(*dfs(V))
print(*bfs(V))