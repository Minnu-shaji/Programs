import math
n=int(input())
def isprime(p):
    r=int(math.sqrt(p))+1
    for i in range(2,r):
        if p%i==0:
            return False
    return True

for i in range(2,n):
    if(isprime(i)):
        print(i,end=" ")