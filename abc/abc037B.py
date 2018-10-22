import numpy as np


def main():
    N, Q = map(int, input().split())
    L = [list(map(int, input().split())) for _ in range(Q)]

    ans = np.zeros(N)
    for i in range(Q):
        ans[L[i][0] - 1: L[i][1]] = L[i][2]

    for i in ans:
        print(int(i))


if __name__ == '__main__':
    main()
