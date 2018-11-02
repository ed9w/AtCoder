def main():
    X = input().replace('ch', '').replace('o', '').replace('k', '').replace('u', '')

    print('YES' if X == '' else 'NO')


if __name__ == '__main__':
    main()
