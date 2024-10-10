n=int(input())
l=[""]*n
def encrpt(p,i):
    new=""
    for j in p:
        if j.islower():
           new=new+(chr(((97+((ord(j)-97)-s)%26))))
        else:
            new=new+j
    l[i]=new
def decrpt(p,i):
    new=""
    for j in name:
        if j.islower():
           new=new+(chr(((97+((ord(j)-97)+s)%26))))
        else:
            new=new+j
    l[i]=new

for i in range(0,n):
    s=int(input())
    name=raw_input()
    if (' the ' in name or 'the ' in name):
        encrpt(name,i)
    else:
        decrpt(name,i)
for i in range(0,n):
    print(l[i])

            
        
    

            
        
    



