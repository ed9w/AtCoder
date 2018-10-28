def main():
    s = input()

    ans = ''
    cnt = 0
    for i in range(1, len(s)):
        if s[i - 1] != s[i]:
            ans += s[i - 1] + str(cnt + 1)
            cnt = 0
        else:
            cnt += 1
    else:
        if cnt == 0:
            ans += s[-1] + str(1)
        else:
            ans += s[-1] + str(cnt + 1)

    print(ans)


if __name__ == '__main__':
    main()
