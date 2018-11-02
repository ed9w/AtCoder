m = int(input())

m /= 1000
if m < 0.1:
    print('{:02d}'.format(0))
elif 0.1 <= m and m <= 5:
    print('{:02d}'.format(int(10 * m)))
elif 6 <= m and m <= 30:
    print(int(m + 50))
elif 35 <= m and m <= 70:
    print(int((m - 30) // 5 + 80))
else:
    print(89)
