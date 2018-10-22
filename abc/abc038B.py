def main():
    H1, W1 = map(int, input().split())
    H2, W2 = map(int, input().split())

    if H1 == H2:
        ans = "YES"
    elif H1 == W2:
        ans = "YES"
    elif W1 == H2:
        ans = "YES"
    elif W1 == W2:
        ans = "YES"
    else:
        ans = "NO"

    print(ans)


if __name__ == '__main__':
    main()
