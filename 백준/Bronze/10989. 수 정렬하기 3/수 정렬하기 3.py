import sys
input = sys.stdin.readline

T = int(input())

# 범위가 명확하므로(1~10,000) 카운트 배열만 사용
count = [0] * 10001

# 입력과 동시에 카운트
for _ in range(T):
    num = int(input())
    count[num] += 1

# 결과 출력 (별도 배열 없이)
for i in range(1, 10001):
    # 해당 숫자가 나온 횟수만큼 출력
    for _ in range(count[i]):
        print(i)