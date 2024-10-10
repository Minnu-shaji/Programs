n=10
q=[[1,5,3],[4,8,7],[6,9,1]]
a=[0 for i in range(n)]
for i in range(len(q)):
    for j in range(q[i][0],q[i][1]):
        a[j]+=q[i][2]
print(max(a))
    