def main():
    n, m = map(int, input().split())

    a = ((n if n <= 12 else n - 12) + m / 60) * 30
    b = m * 6

    if abs(b - a) <= 180:
        print(abs(b - a))
    else:
        print(360 - abs(b - a))


if __name__ == '__main__':
    main()
