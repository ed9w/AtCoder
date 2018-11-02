N = int(input())
a = list(map(int, input().split()))

if sum(a) % N != 0:
    print(-1)
else:
    k = sum(a) // N
    ans = 0
    for i in range(N - 1):
        if sum(a[:i + 1]) != (i + 1) * k:
            ans += 1
    print(ans)
