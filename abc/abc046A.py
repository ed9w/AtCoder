def main():
    a, b, c = map(int, input().split())

    ans = 0
    if a == b and b == c:
        ans = 1
    elif a == b or b == c or c == a:
        ans = 2
    else:
        ans = 3

    print(ans)


if __name__ == "__main__":
    main()
