def add(a, b):
    return a + b

def sub(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a , b):
    return a//b

def remainder(a, b):
    return a%b

a, b = map(int, input().split())

print(add(a,b))
print(sub(a,b))
print(multiply(a,b))
print(divide(a,b))
print(remainder(a,b))