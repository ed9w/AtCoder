n = int(input())
li = [0, 0, 0, 1]

for i in range(4, n + 1):
    li.append((li[i - 1] + li[i - 2] + li[i - 3]) % 10007)

print(li[n])
