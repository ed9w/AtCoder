def main():
    s = [input() for _ in range(3)]
    s[0] = s[0] + 'k'
    s[1] = s[1] + 'k'
    s[2] = s[2] + 'k'

    k = s[0][0]
    s[0] = s[0][1:]
    ans = ''
    while True:
        if len(s[0]) == 0:
            ans = 'A'
            break
        elif len(s[1]) == 0:
            ans = 'B'
            break
        elif len(s[2]) == 0:
            ans = 'C'
            break

        if k == 'a':
            k = s[0][0]
            s[0] = s[0][1:]
        elif k == 'b':
            k = s[1][0]
            s[1] = s[1][1:]
        elif k == 'c':
            k = s[2][0]
            s[2] = s[2][1:]

    print(ans)


if __name__ == "__main__":
    main()
