def solve(s):
    s2=""
    l=s.split()
    for i in range(len(l)):
        s2+=l[i].capitalize()
        s2+=" "
    return s2

s=input()
result=solve(s)
print(result)