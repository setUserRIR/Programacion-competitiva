from sys import stdin

datos = [int(x) for x in stdin.readline().split()]

datos[0] += 1

if datos[0] <= datos[1]-datos[2]-datos[3]: print("Igor feliz!")
elif datos[2] > (datos[2]+datos[3])/2: print("Caio, a culpa eh sua!")
else: print("Igor bolado!")
