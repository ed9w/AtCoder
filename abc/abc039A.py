def main():
    A, B, C = map(int, input().split())

    S = 2 * (A * B + B * C + C * A)
    print(int(S))


if __name__ == '__main__':
    main()
