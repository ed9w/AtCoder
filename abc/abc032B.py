def main():
    s = input()
    k = int(input())

    if len(s) < k:
        ans = 0
    elif k == len(s):
        ans = 1
    else:
        v = set()
        for i in range(len(s) - (k - 1)):
            v.add(s[i:i + k])
        ans = len(v)
    print(ans)


if __name__ == '__main__':
    main()
