import numpy as np


def main():
    W, H, N = map(int, input().split())
    s = np.zeros((W, H))
    for _ in range(N):
        x, y, a = map(int, input().split())

        if a == 1:
            s[:x, :] = 1
        elif a == 2:
            s[x:, :] = 1
        elif a == 3:
            s[:, :y] = 1
        elif a == 4:
            s[:, y:] = 1

    print(W * H - np.sum(s))


if __name__ == "__main__":
    main()
