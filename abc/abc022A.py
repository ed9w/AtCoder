import numpy as np


def main():
    N, S, T = map(int, input().split())
    W = int(input())
    A = [int(input()) for _ in range(N - 1)]

    A.insert(0, 0)
    A = np.cumsum(A)
    A += W

    cnt = len([x for x in A if S <= x and x <= T])
    print(cnt)


if __name__ == '__main__':
    main()
