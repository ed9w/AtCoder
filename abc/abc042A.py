def main():
    li = list(map(int, input().split()))

    c5 = li.count(5)
    c7 = li.count(7)

    print("YES" if c5 == 2 and c7 == 1 else "NO")


if __name__ == '__main__':
    main()
