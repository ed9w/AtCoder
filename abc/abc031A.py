def main():
    A, D = map(int, input().split())

    x = (A + 1) * D
    y = A * (D + 1)

    if x < y:
        ans = y
    else:
        ans = x

    print(ans)


if __name__ == '__main__':
    main()
