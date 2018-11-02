import numpy as np
import math


N = int(input())
A = list(map(int, input().split()))

A = list(filter(lambda x: x > 0, A))
print(math.ceil(np.mean(A)))
