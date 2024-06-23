t = int(input())

for a in range(t):
	x = input()
	x = x.split(" ")
	d = int(x[0])
	p = x[1]

	#ctotal = p.count("c")
	c = p.split("C")
	if len(c) == 1:
		dtotal = len(c[0])
		if dtotal > d: print("Case #{}: IMPOSSIBLE".format(a+1))
		else: print("Case #{}: 0".format(a+1))
	else:
		wap = 0
		if(c[0] == ''):
			dder = len(c[1])*2
			dizq = 0
		else:
			dizq = len(c[0])
			dder = len(c[1])*2

		dtotal = dizq+dder

		if dtotal <= d: print("Case #{}: 0".format(a+1))
		else:
			if len(c[0])+len(c[1]) > d: print("Case #{}: IMPOSSIBLE".format(a+1))
			else:
				while(dtotal > d):
					dizq += 1
					dder -= 2
					dtotal = dizq+dder
					wap+=1
				print("Case #{}: {}".format(a+1,wap))