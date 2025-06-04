import sys
input = sys.stdin.readline

C = int(input())
num = int(input())
E = []
graph = []
count = 0

for i in range (num):
    edge = list(map(int, input().split()))
    E.append(edge)

for i in range(C+1): # 0번 인덱스는 안 쓰므로 메모리 1칸 낭비
    graph.append([])

for u, v in E: # E의 튜플을 인접 리스트로 구현
    graph[u].append(v)
    graph[v].append(u)

def dfs(start):
    visited = [False] * (C+1) # 방문 체크를 위한 배열 ex) [False][False][False]...
    result = []
    
    def dfs_recursive(node): # dfs_recursive 함수는 그저 방문한 노드를 기록해두고 그 기록을 이용하여 순서를 저장함
        visited[node] = True
        result.append(node)
        for neighbor in graph[node]: # 이걸 위해 그래프 내부 인덱스를 정렬해야 함(더 낮은 것 부터 탐색해야하므로)
            if not visited[neighbor]:
                dfs_recursive(neighbor)
    
    dfs_recursive(start)
    return result

print(len(dfs(1)) - 1)