def main():
    A, B, C, K = map(int, input().split())
    S, T = map(int, input().split())

    s = 0 if S + T < K else -(S + T) * C
    s += A * S + B * T
    print(s)


if __name__ == '__main__':
    main()
