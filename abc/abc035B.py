def main():
    S = input()
    T = int(input())

    x = 0
    y = 0
    cnt = 0
    for i in S:
        if i == 'L':
            x -= 1
        elif i == 'R':
            x += 1
        elif i == 'U':
            y += 1
        elif i == 'D':
            y -= 1
        else:
            cnt += 1

    if T == 1:
        ans = abs(x) + abs(y) + cnt
    else:
        ans = abs(x) + abs(y) - cnt

    print(ans)


if __name__ == '__main__':
    main()
