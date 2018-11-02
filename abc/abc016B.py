A, B, C = list(map(int, input().split()))

if A + B == C and A - B == C:
    print('?')
elif A + B == C:
    print('+')
elif A - B == C:
    print('-')
else:
    print('!')
