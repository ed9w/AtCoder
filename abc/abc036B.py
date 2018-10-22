def main():
    N = int(input())
    S = []
    for i in range(N):
        S.append(list(input()))

    b = [[0 for _ in range(N)] for _ in range(N)]
    for i in range(N):
        for j in range(N):
            b[j][N - 1 - i] = S[i][j]

    for i in b:
        print(''.join(i))


if __name__ == '__main__':
    main()
