a = int(input())
b = int(input())

print(min(abs(a - b), 10 + min(a, b) - max(a, b)))
