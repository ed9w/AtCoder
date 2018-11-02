n = int(input())
a = list(map(int, input().split()))

li = [0, 0]
for i in range(2, 10):
    if i % 2 == 0 or i % 3 == 2:
        li.append(li[i - 1] + 1)
    else:
        li.append(0)

s = 0
for i in a:
    s += li[i]
print(s)
