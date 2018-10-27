def main():
    X = int(input())

    s = 0
    while X > 0:
        s += X % 10
        X //= 10

    print(s)


if __name__ == '__main__':
    main()
