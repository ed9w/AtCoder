def main():
    a = list(map(int, input().split()))
    a.sort()
    print("Yes" if a[0] + a[1] == a[2] else "No")


if __name__ == "__main__":
    main()
