T = int(input())

def is_prime(n):
    if n == 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    # 제곱근까지만 확인 (큰 최적화)
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

for i in range(T):
    num = int(input())
    # 골드바흐의 추측에 따르면 짝수는 두 소수의 합으로 표현 가능
    # 차이가 가장 작은 쌍을 찾으려면 중간에서부터 바깥쪽으로 검색
    mid = num // 2
    for j in range(mid, 1, -1):
        if is_prime(j) and is_prime(num - j):
            print(j, num - j)
            break  # 첫 번째 발견된 쌍이 차이가 가장 작은 쌍