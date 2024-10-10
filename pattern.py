# Enter your code here. Read input from STDIN. Print output to STDOUT
# n=int(input())
# width=2*n-1
# for i in range(0,2*n,2):
#     pattern=(i+1)*'H'
#     print(pattern.center(width," "))
# pattern=" "*((2*n-1-n)//2)+(n*'H')+" "*((2*n-1-n)//2)
# width=n*5-n
# for i in range(n+1):
#     print(2*pattern.ljust(width," "))
# for i in range((n+1)//2):
#     print((" "*((2*n-1-n)//2))+'H'*(n*5))
# for i in range(n+1):
#     print(2*pattern.ljust(width," "))
# width=2*n-1
# for i in range(2*n-2,-1,-2):
#     pattern=(i+1)*'H'
#     print((((n*5)-n)*" ")+pattern.center(width," "))
thickness = int(input()) #This must be an odd number
c = 'H'

#Top Cone
for i in range(thickness):
    print((c*i).rjust(thickness-1)+c+(c*i).ljust(thickness-1))

#Top Pillars
for i in range(thickness+1):
    print((c*thickness).center(thickness*2)+(c*thickness).center(thickness*6))

#Middle Belt
for i in range((thickness+1)//2):
    print((c*thickness*5).center(thickness*6))

#Bottom Pillars
for i in range(thickness+1):
    print((c*thickness).center(thickness*2)+(c*thickness).center(thickness*6))

#Bottom Cone
for i in range(thickness):
    print(((c*(thickness-i-1)).rjust(thickness)+c+(c*(thickness-i-1)).ljust(thickness)).rjust(thickness*6))