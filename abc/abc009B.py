import numpy as np


N = int(input())
A = [int(input()) for _ in range(N)]

A = np.unique(A)
A = np.sort(A)[::-1]
print(A[1])
