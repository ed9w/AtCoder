def main():
    N, K, X, Y = [int(input()) for _ in range(4)]

    res = 0
    if N <= K:
        res = N * X
    else:
        res = K * X + (N - K) * Y

    print(res)


if __name__ == "__main__":
    main()
