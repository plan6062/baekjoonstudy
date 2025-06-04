import sys
input = sys.stdin.readline
sys.setrecursionlimit(10000)

N, M = map(int, input().split())
E = []
graph = []
count = 0
visited = [False] * (N+1) # 방문 체크를 위한 배열 ex) [False][False][False]...

for i in range (M):
    edge = list(map(int, input().split()))
    E.append(edge)

for i in range(N+1): # 0번 인덱스는 안 쓰므로 메모리 1칸 낭비
    graph.append([])

for u, v in E: # E의 튜플을 인접 리스트로 구현
    graph[u].append(v)
    graph[v].append(u)

def dfs_recursive(node): # dfs_recursive 함수는 그저 방문한 노드를 기록해두고 그 기록을 이용하여 순서를 저장함
        visited[node] = True
        for neighbor in graph[node]: 
            if not visited[neighbor]:
                dfs_recursive(neighbor)

for i in range (1, N+1):
    if not visited[i]:
        dfs_recursive(i)
        count += 1

print(count)



