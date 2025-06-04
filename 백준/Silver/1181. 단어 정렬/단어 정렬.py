T = int(input())
words = []
r_words = [] #중복 제거를 위해

for i in range(T):
    word = input()
    words.append(word)

for i in words:
    if i not in r_words:
        r_words.append(i)
    
r_words.sort(key=lambda x: (len(x), x))

for i in r_words:
    print(i)