def main():
    N, L = map(int, input().split())
    S = [input() for _ in range(N)]

    S.sort()
    ans = ''.join(S)
    print(ans)


if __name__ == '__main__':
    main()
