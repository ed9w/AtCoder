def main():
    N, A, B = map(int, input().split())
    D = [input().split() for _ in range(N)]
    D = list(map(lambda x: [1, int(x[1])] if x[0] == 'East' else [-1, int(x[1])], D))

    s = 0
    for x in D:
        if x[1] < A:
            y = A
        elif x[1] > B:
            y = B
        else:
            y = x[1]

        s += y if x[0] == 1 else -y

    if s > 0:
        print('East ' + str(s))
    elif s < 0:
        print('West ' + str(-s))
    else:
        print(0)


if __name__ == '__main__':
    main()
