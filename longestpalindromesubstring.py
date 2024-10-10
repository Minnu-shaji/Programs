def longestPalindrome(s):
    for i in range(len(s),0,-1):
            for j in range(0,len(s)):
                k=s[j:j+i]
                if len(k)==i:
                    #print(k)
                    if k==k[::-1]:
                       return k
f=1
while f==1:
    s=input("Enter the string(X to exit)")
    if s.upper()=='X':
        f=0
    else:
        k=longestPalindrome(s)
        print(k)
        
    
