def main():
    s = input()
    ans = ''
    for ch in s:
        if ch == 'B' and len(ans) != 0:
            ans = ans[:-1]
        elif ch == 'B' and len(ans) == 0:
            ans = ''
        else:
            ans += ch

    print(ans)


if __name__ == '__main__':
    main()
