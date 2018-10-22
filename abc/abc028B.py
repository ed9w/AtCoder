def main():
    S = input()

    print(*[S.count(c) for c in ['A', 'B', 'C', 'D', 'E',
        'F']], sep=' ')


if __name__ == '__main__':
    main()
