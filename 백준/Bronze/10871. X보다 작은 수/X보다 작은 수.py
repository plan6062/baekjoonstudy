n, x = map(int, input().split())
A = list(map(int, input().split()))

result = [num for num in A if num < x]
print(' '.join(map(str, result)))