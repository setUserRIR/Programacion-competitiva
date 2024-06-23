from sys import stdin

def fac(n):
    #if n < 2: return 1
    #else: return n * fac(n-1)
    num = 1
    for a in range(2,n+1):
        num *= a
    return num

n = int(stdin.readline())

for a in range(n):
    x = int(stdin.readline())
    sum = 0
    for b in range(1,14):
        if 5**b > x: break
        sum += int(x/5**b)
    print(sum)