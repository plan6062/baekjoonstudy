import sys
input = sys.stdin.readline

N, C = map(int, input().split())
house = []

for i in range(N):
    val = int(input())
    house.append(val)

house.sort()

def can_install(distance):
    count = 1  # 첫 번째 집에 설치
    last_installed = house[0]  # 마지막으로 설치한 집의 좌표
    
    for i in range(1, N):  # 두 번째 집부터 확인
        if house[i] - last_installed >= distance:
            # 거리 조건 만족하면 설치
            count += 1
            last_installed = house[i]  # 설치 위치 업데이트
            
            if count == C:  # C개 다 설치했으면
                return True
    
    return False  # C개 못 설치했으면



left = 1
right = house[-1] - house[0]
answer = 0

while left <= right:
    mid = (left+right) // 2

    if can_install(mid) :
        answer = mid
        left = mid+1
    else:
        right = mid-1

print(answer)
