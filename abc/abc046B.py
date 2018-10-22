def main():
    N, K = map(int, input().split())
    res = 0
    if N == 1:
        res = K
    else:
        res = K * (K - 1) ** (N - 1)

    print(res)


if __name__ == "__main__":
    main()
