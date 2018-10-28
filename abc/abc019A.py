import numpy as np


def main():
    a = list(map(int, input().split()))
    print(int(np.median(a)))


if __name__ == '__main__':
    main()
