def main():
    A, B, C, D = map(int, input().split())

    x = B / A
    y = D / C

    if x < y:
        print('AOKI')
    elif x > y:
        print('TAKAHASHI')
    else:
        print('DRAW')


if __name__ == '__main__':
    main()
