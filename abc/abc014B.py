import numpy as np


n, X = list(map(int, input().split()))
a = np.array(list(map(int, input().split())))

digits = []
while X > 0:
    digits.append(int(X % 2))
    X //= 2

k = n - len(digits)
for _ in range(k):
    digits.append(0)

digits = np.array(digits)
print(np.dot(a, digits))
