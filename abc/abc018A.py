import numpy as np


def main():
    a = [int(input()) for _ in range(3)]

    ix = np.argsort(-np.array(a))
    li = [i + 1 for y in range(3) for i, x in enumerate(ix) if x == y]
    for x in li:
        print(x)


if __name__ == '__main__':
    main()
