def main():
    S = [input() for _ in range(12)]

    cnt = 0
    for s in S:
        cnt += (0 if s.find('r') == -1 else 1)

    print(cnt)


if __name__ == '__main__':
    main()
