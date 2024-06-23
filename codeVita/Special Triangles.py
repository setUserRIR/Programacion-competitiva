from sys import stdin, stdout
import math

class recta:

    m = None
    n = None
    x = None

    def __init__(self,arr):
        if arr[0]-arr[2] != 0: self.m = (arr[1]-arr[3])/(arr[0]-arr[2])
        if self.m is not None: self.n = arr[1]-self.m*arr[0]
        else:
            self.n = arr[1]
            self.x = arr[0]

    def inter(self,t):
        if self.m != t.m:
            if self.x is None and t.x is None: x = (self.n - t.n)/(t.m - self.m)
            else: x = self.x if t.x is None else t.x
            if self.m is None: y = x*t.m+t.n
            else: y = x*self.m+self.n
            return (math.floor(x),math.floor(y))
        else:
            return None  

def hyp(a,b):
    return (a[0]-b[0])**2 + (a[1]-b[1])**2 
        


n = int(input())
v = []
inters = [[None]*n for a in range(n)]
triangulo = []
cont = 0

for a in range(n):
    input()
    v.append(recta([int(x) for x in stdin.readline().split(',')]))

for a in range(n-2):
    for b in range(a+1,n-1):
        if v[a].inter(v[b]) is None: continue

        for c in range(b+1,n):
            t = [(a,b,c),(v[a].inter(v[b]),v[a].inter(v[c]),v[b].inter(v[c]))]
            t.append((hyp(t[1][0],t[1][1]),hyp(t[1][0],t[1][2]),hyp(t[1][1],t[1][2])))
            if t[1][1] is None or t[1][2] is None: continue
            triangulo.append(t)
            cont += 1
#inters[n-1][n-1] = v[n-2].inter(v[n-1])

for a in range(n):
    for b in range(n):
        inters[a][b] = v[a].inter(v[b])


for t in triangulo:
    #print(t)
    #print()
    for a in range(n):
        if a in t[0]: continue
        if inters[a][t[0][0]] is not None and inters[a][t[0][1]] is not None:
            #print(inters[a][t[0][0]],'a b')
            ia_b = hyp(inters[a][t[0][0]],t[1][0])
            ia_c = hyp(inters[a][t[0][0]],t[1][1])
            ib_a = hyp(inters[a][t[0][1]],t[1][0])
            ib_c = hyp(inters[a][t[0][1]],t[1][2])
            if ia_b + ia_c == t[2][0] or ib_a + ib_c == t[2][1]: cont -= 1
        elif inters[a][t[0][0]] is not None and inters[a][t[0][2]] is not None:
            #print(inters[a][t[0][0]],'a c')
            ia_b = hyp(inters[a][t[0][0]],t[1][0])
            ia_c = hyp(inters[a][t[0][0]],t[1][1])
            ic_a = hyp(inters[a][t[0][2]],t[1][1])
            ic_b = hyp(inters[a][t[0][2]],t[1][2])
            if ia_b + ia_c == t[2][0] or ic_a + ic_b == t[2][2]: cont -= 1
        elif inters[a][t[0][1]] is not None and inters[a][t[0][2]] is not None:
            #print(inters[a][t[0][0]], 'b c')
            ib_a = hyp(inters[a][t[0][1]],t[1][0])
            ib_c = hyp(inters[a][t[0][1]],t[1][2])
            ic_a = hyp(inters[a][t[0][2]],t[1][1])
            ic_b = hyp(inters[a][t[0][2]],t[1][2])
            if ib_a + ib_c == t[2][1] or ic_a + ic_b == t[2][2]: cont -= 1

#print(inters)

stdout.write(str(cont))


