def main():
    N = int(input())

    if N <= 59:
        ans = 'Bad'
    elif 60 <= N and N <= 89:
        ans = 'Good'
    elif 90 <= N and N <= 99:
        ans = 'Great'
    else:
        ans = 'Perfect'

    print(ans)


if __name__ == '__main__':
    main()
