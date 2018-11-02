N = int(input())

if N >= 3600:
    h = N // 3600
    m = (N - 3600 * h) // 60
    s = N - 3600 * h - 60 * m
elif N >= 60:
    h = 0
    m = N // 60
    s = N - 60 * m
else:
    h = 0
    m = 0
    s = N

print('{:02}:{:02}:{:02}'.format(h, m, s))
