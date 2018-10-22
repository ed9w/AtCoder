from collections import Counter


def main():
    w = input()
    cnt = list(Counter(w).values())
    s = list(filter(lambda x: x % 2 != 0, cnt))
    print("Yes" if len(s) == 0 else "No")


if __name__ == '__main__':
    main()
