def main():
    N = int(input())
    A = [0] * (10 ** 5 + 1)

    cnt = 0
    for i in range(N):
        x = int(input())
        if A[x] > 0:
            cnt += 1
        A[x] += 1

    print(cnt)


if __name__ == '__main__':
    main()
