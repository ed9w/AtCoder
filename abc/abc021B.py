import numpy as np


def main():
    _ = int(input())
    a, b = list(map(int, input().split()))
    K = int(input())
    P = list(map(int, input().split()))

    if len(P) != len(np.unique(P)):
        print('NO')
    elif a in P or b in P:
        print('NO')
    else:
        print('YES')


if __name__ == '__main__':
    main()
