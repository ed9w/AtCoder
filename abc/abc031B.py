def main():
    L, H = map(int, input().split())
    N = int(input())
    A = [int(input()) for _ in range(N)]

    for a in A:
        if H < a:
            print(-1)
        elif a <= L:
            print(L - a)
        else:
            print(0)


if __name__ == '__main__':
    main()
