n = int(input())

for a in range(n):
    abc = input()
    s = input()

    lis = []
    for l in s:
        lis.append((abc.find(l), l))

    lis.sort()

    ss = ""

    for b in lis:
        ss+=b[1]
    print(ss)
