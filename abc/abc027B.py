import numpy as np


def main():
    N = int(input())
    a = map(int, input().split())

    ans = 0
    if np.mean(a) == np.sum(a):
        for i in range(N - 1):
            left = np.sum(a[: i + 1])

            if (i + 1) * np.mean(a) != left:
                ans += 1
    else:
        ans = -1

    print(ans)


if __name__ == '__main__':
    main()
