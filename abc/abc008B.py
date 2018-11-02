from collections import Counter


N = int(input())
S = [input() for _ in range(N)]

C = Counter(S)
print(C.most_common()[0][0])
