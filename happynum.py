num= raw_input()
a,b=num.split(" ")
c=0
for i in range(a,b+1):
    while(True):
        k=i
        s=0
        for j in k:
            s+=j**2
        if s==1:
            c+=1
            break
        elif s==i:
            break
        else:
            k=s

print(c)            
            
    
