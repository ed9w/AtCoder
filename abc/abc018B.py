def main():
    S = input()
    N = int(input())

    for i in range(N):
        l, r = list(map(int, input().split()))
        s = S[l - 1:r]
        S = S[:l - 1] + s[::-1] + S[r:]

    print(S)


if __name__ == '__main__':
    main()
