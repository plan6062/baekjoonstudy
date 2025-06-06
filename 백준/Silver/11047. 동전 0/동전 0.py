N, K = map(int, input().split())
A = []
count = 0
rest = K

for i in range (N):
    coin = int(input())
    if coin <= K:
        A.append(coin)

A.reverse()

while rest > 0 :
    for coin in A:
        if coin <= rest:
            n_count = rest // coin
            count += n_count
            rest = rest - (coin * n_count)
            

print(count)
