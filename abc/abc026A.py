def main():
    A = int(input())

    ans = 0
    for i in range(1, A + 1):
        j = A - i
        ans = max(ans, i * j)

    print(ans)


if __name__ == '__main__':
    main()
