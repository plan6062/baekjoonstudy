n = int(input())
count = 0

while True:
    if n == 1:
        print(-1)
        break
    elif n == 3:
        print(-1)
        break

    five_count = n // 5
    rest = n % 5
    if rest % 2 == 0:  # 나머지가 짝수
        count = five_count + rest // 2
        print(count)
        break
    else:  # 나머지가 홀수면 5 동전 하나 빼고, 5를 나머지에 더해주면 짝수가 됨
        five_count -= 1
        rest += 5
        count = five_count + rest // 2
        print(count)
        break
                