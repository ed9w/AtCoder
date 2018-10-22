def main():
    A, B, C = map(int, input().split())

    x = C // min(A, B)
    print(x)


if __name__ == '__main__':
    main()
