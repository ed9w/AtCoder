w = input()

ch = {'a': None, 'e': None, 'i': None, 'o': None, 'u': None}
print(w.translate(str.maketrans(ch)))
