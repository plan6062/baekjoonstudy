T = input()
number = list(map(int, input().split()))

prime_count = 0

def is_prime(n) :
    if n == 1:
        return False
    for i in range(2, n):
        if (n % i) == 0:
            return False
    return True

for i in number:
    if is_prime(i):
        prime_count += 1

print(prime_count)
# decimal = []

# for i in range (2, number):
    
#          # 가장 작은 수 찾기
#     for j in number :
#         if (j%n == 0) :
#         #그 자리 인덱스 삭제
# print(len(decimal))