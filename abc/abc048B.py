def main():
    a, b, x = map(int, input().split())
    print(b // x + 1 - ((a - 1) // x + 1 if a != 0 else 0))


if __name__ == "__main__":
    main()
