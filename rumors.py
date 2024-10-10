n=int(input())
j=0
k=0
l=[0]*n
sou=[""]*2*n
des=[""]*n
for i in range(0,n):
    l[i]=raw_input()
    s,e,d=l[i].split(" ")
    if e=="->":
        if s not in sou:
            sou[j]=s
            j+=1
        if d not in des:
            des[k]=d
            k+=1
    elif e=="??":
        if (s not in sou and s not in des) and (d not in sou and d not in des):
            sou[j]=s
            j+=1
            sou[j]=d
            j+=1
        elif (d not in sou and d not in des) and s in des:
            des[k]=d
            k+=1
        elif s not in sou and d in sou:
            des[k]=s
            k+=1
'''for i in sou:
    if i not in des:
        print(i)'''
    
for i in range(0,len(des)):
    if des[i] in sou:
        sou.remove(des[i])
        j-=1
    
for i in range(0,len(sou)):
    print(sou[i])