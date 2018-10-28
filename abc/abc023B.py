def main():
    N = int(input())
    S = input()

    s = 'b'
    for i in range(1, N):
        if i % 3 == 1:
            s = 'a' + s + 'c'
        elif i % 3 == 2:
            s = 'c' + s + 'a'
        else:
            s = 'b' + s + 'b'

        if len(s) == N:
            break

    if s == S:
        print(int((N - 1) / 2))
    else:
        print(-1)


if __name__ == '__main__':
    main()
