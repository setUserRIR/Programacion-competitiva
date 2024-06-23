import math  

def printDivisors(n) : 
      
    # Note that this loop runs till square root 
    divisores = []
    i = 1
    while i <= math.sqrt(n): 
          
        if (n % i == 0) : 

            divisores.append(i)
            # If divisors are equal, print only one 
            if (n / i != i) : 
                divisores.append(int(n/i))
                
        i = i + 1
    divisores.sort()
    return str(divisores)[1:-1]

print(printDivisors(int(input())))