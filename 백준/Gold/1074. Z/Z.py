# 입력 받기
N, r, c = map(int, input().split()) #r은 아래, c는 오른쪽

def solve(n, r, c):
    # 기저 조건: 가장 작은 1×1 배열에 도달했을 때
    if n == 0:
        return 0
    
    # 현재 배열의 한 변 길이의 절반
    half = 2 ** (n - 1)  # 2^(n-1)
    
    # 현재 위치가 어느 사분면에 있는지 확인
    # 0: 왼쪽 위, 1: 오른쪽 위, 2: 왼쪽 아래, 3: 오른쪽 아래
    quadrant = 0
    if r >= half: quadrant += 2  # 아래쪽 사분면
    if c >= half: quadrant += 1  # 오른쪽 사분면
    
    # 이전 사분면까지의 칸 수
    prev_count = quadrant * half * half
    
    # 현재 사분면 내에서의 새로운 좌표 계산
    if r >= half:
        r = r - half
    if c >= half:
        c = c - half
    
    # 재귀적으로 더 작은 배열에서의 위치 찾기
    return prev_count + solve(n-1, r, c)

print(solve(N, r, c))