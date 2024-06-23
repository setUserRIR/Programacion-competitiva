def is_vocal(x):
    return x in ['a','e','i','o','u']

n = int(input())
s = input()

tam = len(s)

ini = 0
fin = tam - (n-1)*4

piv = 3
cont = 0
flag = False

while piv < n:
    if piv-ini+1 >= 4 and is_vocal(s[piv]):
        cont += 1
        if not flag and piv-ini > 3:
            ini = piv
            flag = True