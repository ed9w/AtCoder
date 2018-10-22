def main():
    N = int(input())
    s = [0] * N
    p = [0] * N
    for i in range(N):
        s[i], p[i] = input().split()
        p[i] = int(p[i])

    k = sum(p)
    ans = 'atcoder'
    for i in range(N):
        if p[i] * 2 > k:
            ans = s[i]
            break

    print(ans)


if __name__ == '__main__':
    main()
