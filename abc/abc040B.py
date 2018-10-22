def main():
    n = int(input())

    if n == 1:
        ans = 0
    else:
        ans = n

    for i in range(1, n):
        ans = min(ans, abs(int(n / i) - i) + n % i)

    print(ans)


if __name__ == '__main__':
    main()
