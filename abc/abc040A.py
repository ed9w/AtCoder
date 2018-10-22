def main():
    n, x = map(int, input().split())

    if x <= n // 2:
        print(x - 1)
    else:
        print(n - x)


if __name__ == '__main__':
    main()
