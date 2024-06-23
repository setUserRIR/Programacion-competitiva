n = int(input())

#l1 = [int(input()) for x in range(n)]
#l2 = [int(input()) for x in range(n)]
#l3 = [int(input()) for x in range(n)]

l1 = list(input().split())
l2 = list(input().split())
l3 = list(input().split())

r = int(input())

for cont in range(r):
    #rl = [int(input()) for x in range(6)]
    rl = list(input().split())

    a = set(l1[int(rl[0])-1:int(rl[1])] + l2[int(rl[2])-1:int(rl[3])] + l3[int(rl[4])-1:int(rl[5])])
    print(len(a))

