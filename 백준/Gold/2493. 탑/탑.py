import sys
input = sys.stdin.readline

N = int(input())
stack = []
answer = [0] * N  # 각 탑의 위치에 직접 답을 저장

top = list(map(int, input().split()))
top.reverse()

for i in range(N):
    height = top[i]
    current_index = N - i  # 현재 탑의 원래 인덱스 (1-based)
    
    # 스택에서 현재 탑보다 낮은 탑들을 모두 제거하면서
    # 그 탑들의 신호를 현재 탑이 수신한다고 기록
    while stack and stack[-1][0] < height:
        removed_tower = stack.pop()
        removed_tower_index = removed_tower[1] - 1  # 0-based 인덱스로 변환
        answer[removed_tower_index] = current_index  # 제거된 탑의 위치에 현재 탑 번호 저장
    
    # 현재 탑을 스택에 추가
    stack.append((height, current_index))

# 스택에 남은 탑들은 신호를 수신할 탑이 없음 (이미 0으로 초기화됨)

print(' '.join(map(str, answer)))