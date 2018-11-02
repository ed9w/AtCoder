from functools import reduce


N = int(input())

li = list(range(1, N + 1))
s = reduce(lambda x, y: x + y, li)
print(int(s / N * 10000))
