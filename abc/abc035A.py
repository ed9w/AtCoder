def main():
    W, H = map(int, input().split())

    if W % 16 == 0 and H % 9 == 0:
        ans = '16:9'
    else:
        ans = '4:3'

    print(ans)


if __name__ == '__main__':
    main()
