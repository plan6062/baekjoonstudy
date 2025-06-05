import sys
input = sys.stdin.readline

N, M = map(int, input().split())

floor = []


for i in range (N):
    floor.append(input())
    
# print(floor)    
total_planks = N * M # 전체 판자 수
    
#행 검사
for i in range(N):
    for j in range(M - 1):  
        if floor[i][j] == '-' and floor[i][j + 1] == '-':
            total_planks -= 1
    
#열 검사
for i in range(N - 1): 
    for j in range(M):
        if floor[i][j] == '|' and floor[i + 1][j] == '|':
            total_planks -= 1
    
print(total_planks)



