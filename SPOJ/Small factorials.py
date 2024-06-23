from sys import stdin

def fac(n):
    if n < 2: return 1
    else: return n * fac(n-1)

n = int(stdin.readline())

for a in range(n):
    print(fac(int(stdin.readline())))