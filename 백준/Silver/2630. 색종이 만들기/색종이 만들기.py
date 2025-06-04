N = int(input())
paper = []
white = 0
blue = 0

for i in range (0, N):
    val = list(map(int, input().split()))
    paper.append(val)

def is_same_color(start_row, start_col, size):
    first_color = paper[start_row][start_col]  # 기준이 되는 첫 번째 색
    
    for i in range(start_row, start_row + size):
        for j in range(start_col, start_col + size):
            if paper[i][j] != first_color:
                return False
    return True

def solve(start_row, start_col, size):
    global white, blue
    # 이 함수가 해야 할 일:
    # 1. is_same_color()로 현재 영역 확인
    result = is_same_color(start_row, start_col, size)        
    # 2. 같은 색이면 → 해당 색 카운트 +1
    if result == True and paper[start_row][start_col] == 1:
        blue += 1
    elif result == True and paper[start_row][start_col] == 0:
        white += 1
    # 3. 다른 색이면 → 4등분해서 재귀 호출
    else:
        size = size // 2
        solve(start_row, start_col, size)
        solve(start_row + size, start_col, size)
        solve(start_row, start_col+size, size)
        solve(start_row+size, start_col+size, size)

solve(0, 0, N)
print(white)
print(blue)