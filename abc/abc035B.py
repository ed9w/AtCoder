def main():
    S = input()
    T = int(input())

    l, r, u, d, q = [S.count(ch) for ch in 'LRUD?']
    dist = abs(l - r) + abs(u - d)
    if T == 1:
        ans = dist + q
    else:
        if q <= dist:
            ans = dist - q
        else:
            ans = (q - dist) % 2

    print(ans)


if __name__ == '__main__':
    main()
