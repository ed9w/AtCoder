import itertools


def main():
    S = input()
    N = int(input())

    c = list(itertools.product(S, repeat=2))
    ans = c[N - 1][0] + c[N - 1][1]
    print(ans)


if __name__ == '__main__':
    main()
