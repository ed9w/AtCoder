S = input()
T = input()

ch = 'atcoder'
for s, t in zip(S, T):
    if s == t:
        continue
    elif s == '@' and t in ch:
        continue
    elif t == '@' and s in ch:
        continue
    else:
        print('You will lose')
        break
else:
    print('You can win')
