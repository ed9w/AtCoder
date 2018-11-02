def main():
    ma = [list(map(int, input().split())) for _ in range(3)]

    k = 0
    for s, e in ma:
        k += s * e

    print(int(k / 10))


if __name__ == '__main__':
    main()
