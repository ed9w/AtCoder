import numpy as np


def main():
    N = int(input())
    R = [int(input()) for _ in range(N)]

    R.sort(reverse=True)
    R = list(map(lambda x: x ** 2, R))
    s = 0
    for i, x in enumerate(R):
        s += x if i % 2 == 0 else -x

    print(s * np.pi)


if __name__ == '__main__':
    main()
