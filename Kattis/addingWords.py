from sys import stdin, stdout

s = " "
dic = {}
dic2 = {}
while(len(s) > 0):
    s = stdin.readline()
    if(len(s) <= 0): break
    arr = s.split()
    #print("string: "+s+str(len(s)))
    if(arr[0] == "def"):
        if(int(arr[2]) in dic2):
            del(dic[dic2[int(arr[2])]])
            del(dic2[int(arr[2])])
        dic[arr[1]] = int(arr[2])
        dic2[int(arr[2])] = arr[1]
    elif(arr[0] == "calc"):
        del(arr[0])
        st = " ".join(arr)
        suma = 0
        flag = 1
        for a in arr:
            #print(a)
            if(a == "="):
                
                if(suma in dic2): 
                    print(st+" "+dic2[suma])
                else: print(st+" unknown")
            elif(a != '+' and a != '-'):
                if(a in dic):
                    suma += dic[a]*flag
                else:
                    #print("no esta: "+a)
                    print(st+" unknown")
                    break
            else:
                if(a == "+"): flag = 1
                else: flag = -1
    
    else:
        dic.clear()
        dic2.clear()