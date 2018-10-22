def main():
    li = [ch for ch in input()]

    cnt = li.count(li[0])
    if(cnt == len(li)):
        print('SAME')
    else:
        print('DIFFERENT')


if __name__ == '__main__':
    main()
