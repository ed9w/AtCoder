def main():
    N, T = map(int, input().split())
    A = [int(input()) for _ in range(N)]

    s = 0
    for i in range(len(A) - 1):
        if A[i] + T <= A[i + 1]:
            s += T
        else:
            s += A[i + 1] - A[i]

    s += T
    print(s)


if __name__ == '__main__':
    main()
