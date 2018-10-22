def main():
    A, B, C = map(int, input().split())
    D = 1000000000 + 7

    print((A * B * C) % D)


if __name__ == '__main__':
    main()
